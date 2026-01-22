#include <stdio.h>
int main()
{
    int a[10],i,neg=0;
    for(i=0;i<5;i++)
    {
        printf("Enter a number: ");
        scanf("%d",&a[i]);
    }


    for(i=0;i<5;i++)
    {
        if(a[i]<0)
        neg++;
    }
    printf("The negative number is: %d",neg);
}
