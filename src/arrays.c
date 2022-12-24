#include <stdio.h>
int main() {
  int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
  int loop;

  for (loop = 0; loop < 10; loop++)
    printf("%d\n", array[loop]);

  return 0;
}

int ex2() {
  int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
  int loop;

  for(loop = 9; loop >= 0; loop--)
    printf("%d", array[loop]);

  return 0;
}

int ex3() {
    int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    int loop, sum;
    sum = 0;

    for(loop = 9; loop >= 0; loop--) {
        sum = sum + array[loop];
    }
    printf("The sum of array is: %d", sum);

    return 0;
}

int ex4() {
    int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    int sum, loop;
    float avg;

    sum = avg = 0;

    for (loop = 0; loop < 10; loop++) {
        sum = sum + array[loop];
    }
    avg = (float)sum / loop;
    printf("The average is: %.2f", avg);
    return 0;
}


int ex5() {
    int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    int loop, largest;
    largest = array[0];

    for(loop = 1; loop < 10; loop++) {
        if ( largest < array[loop] )
          largest = array[loop];
    }
    printf("The Largest number is: %d\n", largest);
    return 0;
}

int ex6() {
   int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
   int loop, smallest;

   smallest = array[0];

   for(loop = 1; loop < 10; loop++) {
      if( smallest > array[loop] )
         smallest = array[loop];
   }

   printf("Smallest element of array is %d", smallest);

   return 0;
}
