#include <stdio.h>
int main()
{
    int a[10], i, even = 0, odd = 0;

    for(i = 0; i < 5; i++)
    {
        printf("Enter numbers to check even and odd: ");
        scanf("%d", &a[i]);
    }

    printf("The array elements are\n");

    for(i = 0; i < 5; i++)
    {
        if(a[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    printf("The numbers even = %d and odd = %d", even, odd);
    return 0;
}
