#ifndef _main_h_
#define _main_h_

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

/* Libraries for to use File I/0 */
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

/* Project 0 - File I/O */

/* Task 0 */
ssize_t read_textfile(const char *filename, size_t letters);

/* Task 1 */
int create_file(const char *filename, char *text_content);

/* Task 2 */
int append_text_to_file(const char *filename, char *text_content);

/* Auxiliary function */
void freeBuffer(char **buffer);

#endif
