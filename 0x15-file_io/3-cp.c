#include "main.h"

#define USAGE "Usage: cp file_from file_to\n"
#define ERR_NOREAD "Error: Can't read from file %s\n"
#define ERR_NOWRITE "Error: Can't write to %s\n"
#define ERR_NOCLOSE "Error: Can't close fd %d\n"
#define PERMISSIONS (S_IRUSR | I_IWUSR | S_IRGRP | S_IWGRP | S_IROTH)

/**
 * main - progress
 * @ac: argument count
 * @av: argument vector
 * Return: 1 on sucess 0 failed
 */

int main(int ac, char **av)

