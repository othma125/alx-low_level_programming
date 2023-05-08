#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>
#include <fcntl.h>
ssize_t read_textfile(const char *, size_t);
int create_file(const char *, char *);
int append_text_to_file(const char *, char *);


#endif
