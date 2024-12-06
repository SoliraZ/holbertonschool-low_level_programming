# File I/O in C

This repository contains functions for performing file input and output operations in C.

## 0. Read Text File

Write a function that reads a text file and prints it to the POSIX standard output.

**Prototype:**
```c
ssize_t read_textfile(const char *filename, size_t letters);
```

- `letters` is the number of letters it should read and print.
- Returns the actual number of letters it could read and print.
- If the file cannot be opened or read, return 0.
- If `filename` is `NULL`, return 0.
- If `write` fails or does not write the expected amount of bytes, return 0.

## 1. Create File

Create a function that creates a file.

**Prototype:**
```c
int create_file(const char *filename, char *text_content);
```

- `filename` is the name of the file to create.
- `text_content` is a NULL terminated string to write to the file.
- Returns: 1 on success, -1 on failure (file cannot be created, file cannot be written, write “fails”, etc.).
- The created file must have those permissions: `rw-------`. If the file already exists, do not change the permissions.
- If the file already exists, truncate it.
- If `filename` is `NULL`, return -1.
- If `text_content` is `NULL`, create an empty file.

## 2. Append Text to File

Write a function that appends text at the end of a file.

**Prototype:**
```c
int append_text_to_file(const char *filename, char *text_content);
```

- `filename` is the name of the file.
- `text_content` is the NULL terminated string to add at the end of the file.
- Return: 1 on success and -1 on failure.
- Do not create the file if it does not exist.
- If `filename` is `NULL`, return -1.
- If `text_content` is `NULL`, do not add anything to the file. Return 1 if the file exists and -1 if the file does not exist or if you do not have the required permissions to write the file.

## 3. Copy File

Write a program that copies the content of a file to another file.

**Usage:**
```sh
cp file_from file_to
```

- If the number of arguments is not correct, exit with code 97 and print `Usage: cp file_from file_to`, followed by a new line, on the POSIX standard error.
- If `file_to` already exists, truncate it.
- If `file_from` does not exist, or if you cannot read it, exit with code 98 and print `Error: Can't read from file NAME_OF_THE_FILE`, followed by a new line, on the POSIX standard error.
- If you cannot create or if write to `file_to` fails, exit with code 99 and print `Error: Can't write to NAME_OF_THE_FILE`, followed by a new line, on the POSIX standard error.
- If you cannot close a file descriptor, exit with code 100 and print `Error: Can't close fd FD_VALUE`, followed by a new line, on the POSIX standard error.
- Permissions of the created file: `rw-rw-r--`. If the file already exists, do not change the permissions.
- You must read 1,024 bytes at a time from the `file_from` to make fewer system calls. Use a buffer.
- You are allowed to use `dprintf`.

**Repository:**
- GitHub repository: `holbertonschool-low_level_programming`
- Directory: `file_io`
- Files: `0-read_textfile.c`, `1-create_file.c`, `2-append_text_to_file.c`, `3-cp.c`
