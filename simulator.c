/* Simple program that takes in an elf binary for armv9,
 * and attempts to find out the first byte into the main function. */
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>

int main(int argc, char** argv)
{
	if (argc != 2) {
		printf("Usage: ./a9sim <elf_to_execute>\n");
		return -1;
	}

	int fd = open(argv[1], O_RDONLY);


	/* Lets assume there's no dynamic libraries to worry about.
	 * All code is in .text section.  */



	close (fd);
	return 0;
}
