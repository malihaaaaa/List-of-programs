#include<stdio.h>
int main()
{
    int a,b,max;
    printf("enter two numbers: ");
    scanf("%d %d",&a,&b);

    if(a<b)
    {
        printf("max=%d",b);
    }
    else
    {
        printf("max=%d",a);
    }
    return 0;
}
