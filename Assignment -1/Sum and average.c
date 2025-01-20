//1. Write a C program to find sum and average of three numbers.
//Source Code :

 #include <stdio.h>
 int main(){
 int a, b, c, sum;
 float avg;
 printf("Enter 3 numbers: \n");
 scanf("%d %d %d", &a, &b, &c);
 sum = a + b + c;
 avg = sum / 3.0;
 printf("Sum = %d \n", sum);
 printf("Average = %.2f\n", avg);
 return 0;
}
