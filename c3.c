#include<stdio.h>
int add(int x,int y)
{
    return x+y;
}
int main()
{
    int a,b;
    printf("Enter two numbers : ");
    scanf("%d%d",&a,&b);
    printf("\nThe Sum : %d",add(a,b));
}