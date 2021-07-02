#include <stdio.h>

int main()
{
    int c=0;
    char s[1000], d[1000];

    printf("Input a string\n");
    gets(s);

    while (s[c] != '\0') {
    d[c] = s[c];
    c++;
  }

  d[c] = '\0';

  printf("After copying, the string: %s\n", d);
  printf("Length of the string: %d\n", c);

  return 0;
}