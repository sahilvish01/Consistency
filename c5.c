//WAP to find the addition of two numbers using pointers

#include<stdio.h>
int main()
{
    int a=2,b=2;
    int *p1=&a,*p2=&b;
    printf("The Sum : %d",*p1+*p2);
        
}