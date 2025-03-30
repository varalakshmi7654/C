#include<stdio.h>
int main()
{
    int n;
    printf ("enter  a number");
    scanf("%d",&n);
    if(n>18)
    {
    printf("adult");
    }
    else if(n==18)
    {
    printf("major");
    }
    else
    {
    printf ("children ");
    }
    return 0;
}
