#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *textcontent);
int append_text_to_file(char *filename, char *textcontent);
#define BUFFERSIZE 1024

#endif
