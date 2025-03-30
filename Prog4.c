include<stdio.h>
void main()
{
    int a,b;
    printf("enter two numbers");
    scanf("%d%d",&a,&b);
    if(a==b)
    printf("both numbers are equal");
    if(a>b)
    printf("%d",a);
    if(b>a)
    printf("%d",b);
}

