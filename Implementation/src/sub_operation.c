#include "func.h"
#include<stdio.h>

void subtraction()
{ 
    int a, b, c = 0; 
    printf("\nPlease enter first number  : "); 
    scanf("%d", &a); 
    printf("Please enter second number : "); 
    scanf("%d", &b); 
    c = a - b; 
    printf("\n%d - %d = %d\n", a, b, c); 
}
