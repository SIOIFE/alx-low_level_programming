#include <main.h>
#include "main.h"
#include <math.h>

char *argstostr(int ac, char **av);
char **strtow(char *str);
void free_grid(int **grid, int height);
int **alloc_grid(int width, int height);
char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
