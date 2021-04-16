#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include "func.h"

 
#define INP "Enter the Symbol of Operation:"

int main()
{
    char symbol;
 
    displayOperations();
 
    while(1)
    {
        printf("\n");
        printf("%s : ", INP);
 
        symbol=getche();
 
        switch(symbol)
        {
            case '+': addition();
                      break;
 
            case '-': subtraction();
                      break;
 
            case '*': multiplication();
                      break;
 
            case '/': division();
                      break;
 
            case '!': factorial();
                      break;
 
            case '^': power();
                      break;
 
            case 'E':
            case 'e': exit(0);
                      break;
 
            default : system("cls");
 
        printf("\n==========Wrong symbol entered!!!==========\n==========Enter correct Symbol==========\n\n");
            displayOperations();
        }
    }
}




