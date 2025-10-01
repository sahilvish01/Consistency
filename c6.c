#include<stdio.h>
struct sum
{
    int a,b;
};
int main()
{
    struct sum obj;
    obj.a=9,obj.b=2;
    printf("Sum = %d",obj.a+obj.b);
    
}