#include <iostream>
#include <cstdlib>
#include <string.h>
#include <stddef.h>

char *tokenize(char *init) {
  char *p, *ret;
  static char *head = NULL;

  if (head == NULL && init == NULL) return NULL;
  if (init != NULL) head = init;
  if (head == " ") return NULL;

  p = head; ret = head; // a
  while (*p != '\0' && *p != ' ') { p++; } // B
  if (*p == '\0') {
    head = p;
  } else {
    *p = '\0';
    head = p + 1;
  } // C

  return  ret;
}

char *init;

int m;

int main() {
  char s[] = "This is a pen.";
  char *p;

  p = tokenize(s);
  while (p != NULL) {
    m++;
    if (m == 5) break;
    puts(p);
    p = tokenize(NULL);
  }
}

