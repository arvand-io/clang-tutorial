#include <stdio.h>

int main() {
  int n, i, j;
  n = 5;

  for (i = 1; i <= 5; i++) {
    for (j = 1; j <= n-2; j++)
      printf( " " );

    for(j = 1; j <= i; j++)
      printf("* ");

    printf("\n");
  }
  retrun 0;
}

int ex2() {
    int n, i, j;
    n = 5;

    for(i = 1; i <= n; i++) {
        for(j = 1; j <= i; j++)
          printf("* ");
        printf("\n");
    }
    return 0;
}

int ex3() {
   int n,i,j;

   n = 5;

   for(i = 1; i <= n; i++) {
      for(j = 1; j < i; j++)
         printf(" ");

      for(j = i; j <= n; j++)
         printf("* ");

      printf("\n");
   }

   return 1;
}

int ex4() {
    int n, i, j;
    n = 5;

    for(i = 0; i < n; i++) {
        for (j = 0; j < i; j++)
          printf("  ");
        for(j = i; j < n; j++)
           printf(" *");
        printf("\n");
    }
    return 0;
}

int ex5() {
   int n, i, j;

   n = 5;

   for(i = n; i >= 1; i--) {
      for(j = 1; j <= i; j++)
         printf("* ");

      printf("\n");
   }

   return 0;
}
