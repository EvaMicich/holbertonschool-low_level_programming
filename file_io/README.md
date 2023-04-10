# File Input/Output Functions

This repository contains a set of functions to work with files and file descriptors in C. The functions allow reading from a file, creating a file, appending text to a file, and copying the contents of a file to another file.

## Tasks

### 0. Tread lightly, she is near

Function: `ssize_t read_textfile(const char *filename, size_t letters);`

Reads a text file and prints it to the POSIX standard output.

### 1. Under the snow

Function: `int create_file(const char *filename, char *text_content);`

Creates a file with the given filename and text content, and sets the permissions to rw-------.

### 2. Speak gently, she can hear

Function: `int append_text_to_file(const char *filename, char *text_content);`

Appends text to the end of a file.

### 3. cp

Program: `cp file_from file_to`

Copies the content of a file to another file.


## Files

-   0-read_textfile.c
-   1-create_file.c
-   2-append_text_to_file.c
-   3-cp.c