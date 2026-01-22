// 1.Write a C program to find the maximum between two numbers.
#include<stdio.h>

void min_or_max(){
    int a,b;
    printf("Enter First Number:");
    scanf("%d",&a);
    printf("Enter Second Number:");

    scanf("%d",&b);

    if (a > b){
            printf("First Number is greater: %d\n",a);
    }else{
        printf("Second Number is greater: %d\n",b);

    }
    printf("\n");
}

//2.Write a C program to find a maximum between three numbers.

void max_in_3_no(){
    int a,b,c;
    printf("Enter First Number: ");
    scanf("%d",&a);
    printf("Enter Second Number: ");
    scanf("%d",&b);
    printf("Enter Third Number: ");
    scanf("%d",&c);

    if(a>b && a>c)
        printf("%d is greater",a);
    else if(b>a && b>c)
        printf("%d is greater");
    else
        printf("%d is greater",c);

        printf("\n");
}

//3.Write a C program to check whether a number is negative, positive or zero.

void positive_or_negative()
{
    int num;
    printf("Enter a number to check: ");
    scanf("%d", &num);

    if(num>0)
        printf("%d is a positive number.", num);
    else if(num<0)
        printf("%d is a negative number", num);
    else
        printf("%d is zero",num);

        printf("\n");

}

//4.Write a C program to check whether a number is divisible by 5 and 11 or not.

void divi_by_5_and_11()
{
    int num;

    printf("Enter a number: ");
    scanf("%d",&num);

    if(num%5 == 0)
        printf("%d is divisible by 5",num);
    else if(num%11 == 0)
        printf("%d is divisible by 11",num);
    else
        printf("%d is not divisible by 5 & 11",num);

        printf("\n");
}

//5.Write a C program to check whether a number is even or odd.

void even_odd()
{
    int num;
    printf("Enter a number to check: ");
    scanf("%d",&num);

    if(num%2 == 0)
        printf("%d is an even number", num);
    else
        printf("%d is an odd number",num);

    printf("\n");
}

void main()
{
    int num,op,i=0;

    do{
        printf("Enter 1 to print min_or_max\n");
        printf("Enter 2 to print max_in_3_no\n");
        printf("Enter 3 to print positive_or_negative\n");
        printf("Enter 4 to print divi_by_5_and_11\n");
        printf("Enter 5 to print even_odd\n");

        scanf("%d",&op);

        switch(op)
        {
        case 1:
            min_or_max();
            break;
        case 2:
            max_in_3_no();
            break;
        case 3:
            positive_or_negative();
            break;
        case 4:
            divi_by_5_and_11();
            break;
        case 5:
            even_odd();
            break;

        default:
            printf("Something went wrong!!!");
        }

        printf("\n If you want to continue the code then press 1: ");
        scanf("%d",&i);
    }
    while(i==1);
}

