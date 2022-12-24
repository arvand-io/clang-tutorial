#include <stdio.h>
int main() {
    int arms = 153;
    int check, rem, sum = 0;
    check = arms;

    while(check != 0) {
        rem = check % 10;
        sum = sum + ( rem * rem * rem);
        check = check / 10;
    }
    if (sum == arms) {
        printf("%d is an Armstrong Number", arms);
    } else
        printf("%d is not an Armstrong number", arms);
}

void swap(int *p,int *q) {
   int t;

   t=*p;
   *p=*q;
   *q=t;
}

void sort(int a[],int n) {
   int i,j,temp;

   for(i = 0;i < n-1;i++) {
      for(j = 0;j < n-i-1;j++) {
         if(a[j] > a[j+1])
            swap(&a[j],&a[j+1]);
      }
   }
}

int main() {
   int a[] = {6,3,8,5,1};
   int n = 5;
   int sum,i;

   sort(a,n);

   n = (n+1) / 2 - 1;      // -1 as array indexing in C starts from 0

   printf("Median = %d ", a[n]);

   return 0;
}

double cubeRoot(double n) {
   double i, precision = 0.000001;

   for(i = 1; (i*i*i) <= n; ++i);         //Integer part

   for(--i; (i*i*i) < n; i += precision);  //Fractional part

   return i;
}

int main() {
   int n = 125;

   printf("Cube root of %d = %lf", n, cubeRoot(n));

   return 0;
}
