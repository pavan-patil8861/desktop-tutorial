#include<stdio.h>
int main()
{
    int num, count=0;

    printf("Enter number to check: ");
    scanf("%d",&num);

    for(int i = 1; i<=num; i++)
    {
        if(num % i == 0)
        {
            count++;
        }
    }

    if (count == 2)
    {
        printf("It's Prime");
    }
    else
    {
        printf("Not Prime");
    }
    return 0;
}
