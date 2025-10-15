#include <stdio.h>

int main(){ 
printf("Name: Kc P. Balambao\n");
printf("ID Number: 2025304315\n");

printf("----------------------\n");

int num1;
int num2;

printf("enter num1: ");
scanf("%d",&num1);
printf("enter num2: ");
scanf("%d",&num2);

printf("----------------------");
printf("\nnum1: %d ", num1);
printf("\nnum2: %d ", num2);
printf("\n----------------------------------------\n");

int sum = num1 + num2;
int product = num1 * num2;
int difference = num1 - num2;
int quotient = num1 / num2;

printf("RESULT:the sum of %d and %d is %d\n", num1, num2, sum);
printf("RESULT:the product of %d and %d is %d\n", num1, num2, product);
printf("RESULT:the difference of %d and %d is %d\n", num1, num2, difference);
printf("RESULT:the quotient of %d and %d is %d\n", num1, num2, quotient);


}