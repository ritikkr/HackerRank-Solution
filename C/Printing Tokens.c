#include <stdio.h>

#define MAXC 1000

int main(void) {

  int c = 0;
  size_t n = 0;

 

  /* read up to 100 characters from stdin, print each word on a line */
  while (n < MAXC && (c = getchar()) != EOF && c != '\n') {
    if (c == ' ')
      printf("\n");
    else
      printf("%c", c);
    n++;
  }
  printf("\n");

  if (n == MAXC) /* read and discard remaining chars in stdin */
    while ((c = getchar()) != '\n' && c != EOF)
      ;

  return 0;
}
