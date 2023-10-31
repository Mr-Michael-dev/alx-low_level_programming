#include <stdbool.h>
#include "main.h"
#include <elf.h>


bool is_elf_file(Elf64_Ehdr elf_header);
void display_elf_header(Elf64_Ehdr elf_header);

#define ELF_HEADER_SIZE 52

int main(int argc, char *argv[])
{
	int fd;
	Elf64_Ehdr elf_header;
	
	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
		exit(98);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		fprintf(stderr, "Error opening file: %s\n", argv[1]);
		exit(98);
	}
	
	lseek(fd, 0, SEEK_SET);
	read(fd, &elf_header, ELF_HEADER_SIZE);

	if (!is_elf_file(elf_header))
	{
		fprintf(stderr, "File is not an ELF file\n");
		exit(98);
	}

	display_elf_header(elf_header);

	close(fd);

	return 0;
}

bool is_elf_file(Elf64_Ehdr elf_header)
{
	if (elf_header.e_ident[EI_MAG0] != 0x7f || 	elf_header.e_ident[EI_MAG1] != 'E' ||
      elf_header.e_ident[EI_MAG2] != 'L' ||
      elf_header.e_ident[EI_MAG3] != 'F') {
    return false;
  }
  return true;
}

void display_elf_header(Elf64_Ehdr elf_header)
{
  printf("ELF Header:\n");
  printf("  Magic: 7f 45 4c 46\n");
  printf("  Class: %d\n", elf_header.e_ident[EI_CLASS]);
  printf("  Data: %d\n", elf_header.e_ident[EI_DATA]);
  printf("  Version: %d\n", elf_header.e_ident[EI_VERSION]);
  printf("  OS/ABI: %d\n", elf_header.e_ident[EI_OSABI]);
  printf("  ABI Version: %d\n", elf_header.e_ident[EI_ABIVERSION]);
  printf("  Type: %d\n", elf_header.e_type);
  printf("  Entry point address: 0x%lx\n", elf_header.e_entry);
}

