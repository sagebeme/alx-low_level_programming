0x15. File I/O
=============

This project practices **file I/O** in C: using system calls `open`, `read`, `write`, and `close` (with `O_RDONLY`, `O_WRONLY`, `O_CREAT`, etc.) and the related flags and permissions. You read from and write to files without relying only on `stdio` functions.

Tasks
-----

**Task numbers:** 0, 1, 2, 3, 100

### 0. read_textfile

mandatory

Write a function that reads a text file and prints it to the POSIX standard output. Return the actual number of letters read and printed; 0 on failure or if filename is NULL.

**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x15-file_io`
-   File: `0-read_textfile.c`

### 1. create_file

mandatory

Write a function that creates a file. The created file has permissions rw-------. If the file already exists, truncate it. Return 1 on success, -1 on failure.

**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x15-file_io`
-   File: `1-create_file.c`

### 2. append_text_to_file

mandatory

Write a function that appends text at the end of a file. Return 1 on success, -1 on failure. Do not create the file if it does not exist.

**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x15-file_io`
-   File: `2-append_text_to_file.c`

### 3. cp

mandatory

Write a program that copies the content of a file to another file. Usage: cp file_from file_to. If file_to already exists, truncate it. Permissions: rw-rw-r--.

**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x15-file_io`
-   File: `3-cp.c`

### 100. elf_header

mandatory

Write a program that displays the information contained in the ELF header at the start of an ELF file. Usage: readelf filename (or as specified).

**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x15-file_io`
-   File: `100-elf_header.c`

---

**How to run / test**

1. Compile and run; use real or test files to verify read/write.
2. Check return values of `open`/`read`/`write` and handle errors; set correct permissions (e.g. `chmod`) when creating files.

**Resources**

- [open(2) – Linux man page](https://man7.org/linux/man-pages/man2/open.2.html)
- [read(2), write(2) – Linux man pages](https://man7.org/linux/man-pages/man2/read.2.html)
- [File permissions and flags (O_RDONLY, O_CREAT, etc.)](https://man7.org/linux/man-pages/man2/open.2.html#DESCRIPTION)
