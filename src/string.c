#include <stdio.h>
int main() {
  char s1[] = "TajMahal"
  int i = 0;

  while(s1[i] != '\0') {
    i++;
  }
  printf("The length of %s is %d\n", s1, i);
  return 0;
}
