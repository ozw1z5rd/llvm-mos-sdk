#include <stdio.h>

int putchar(int c) {
  __char_conv(c, __putchar);
  return c;
}

int puts(const char *s) {
  for (; *s; ++s)
    putchar(*s);
  putchar('\n');
  return 0;
}

FILE *stdin;
FILE *stdout;
FILE *stderr;

int fputc(int c, FILE *stream) { return putchar(c); }

int fputs(const char *__restrict__ s, FILE *__restrict__ stream) {
  for (; *s; ++s)
    putchar(*s);
  return 0;
}
