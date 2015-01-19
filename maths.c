#include<stdio.h>


void plus(int x, char op, int y)
{
        int res;
        res = x + y;
        printf("%i\n", res);
}

void minus(int x, char op, int y)
{
        int res;
        res = x - y;
        printf("%i\n", res);
}

void divide(int x, char op, int y)
{
        int res;
        res = x / y;
        printf("%i\n", res);
}

void multiply(int x, char op, int y)
{
        int res;
        res = x * y;
        printf("%i\n", res);
}

void mod(int x, char op, int y)
{
        int res;
        res = x % y;
        printf("%i\n", res);
}

int main()
{
        int x, y;
        char op;
        
        printf("This is a Simple maths program\n");
        printf("Operations available: +, -, /, *\n");
        printf("Example: 2 + 3\n");
        
        while(op != 'q') {
                printf("Input: ");
                scanf(" %i %c %i", &x, &op, &y);
                
               switch(op)
               {
               case '+': plus(x,op,y);
                         break;
               case '-': minus(x,op,y);
                         break;
               case '/': divide(x,op,y);
                         break;
               case '*': multiply(x,op,y);
                         break;
               case '%': mod(x,op,y);
                         break;
               default:
                         break;
               }
        }
}
