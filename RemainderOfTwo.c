#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d %d", &a, &b);
    if (a>0 && b>0)
    {
    if (a>b)
    {
    printf("%d",c=a%b);
    }
    else
    {
    printf("%d",d=b%a);
    }
    }
    else
    {
    printf("Invalid input");
    }
    return 0;
}
