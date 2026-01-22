#include<stdio.h>

void program1(){
int i=1;
int j=1;
while(i<=4)
{
j=1;
while(j<=3)
{
printf("%d",i);
i=i+1;
j=j+1;
}
}
}

void program2(){
int i=1;
int j=1;
while(i<=4)
{
j=1;
while(j<=3)
{
printf("%d",j);
j=j+1;
}
i=i+1;
}
}


void program3(){
int i=1;
int j=1;
while(i<=3)
{
j=1;
while(j<=3)
{
printf("%d",j);
j=j+1;
}
i=i+1;
}
}

void program4(){
int i=1;
int j=1;
while(i<=4)
{
j=1;
while(j<=3)
{
printf("%d",j);
j=j+1;
}
i=i+1;
}
}

void program5(){
int i=1;
int j=1;
while(i<=3)
{
j=1;
while(j<=3)
{
printf("%d",i);
j=j+1;
}
i=i+1;
}
}

void main(){

    int op,i=0;

    do{
        printf("press 1 to Print Program 1\n");
        printf("press 2 to Print Program 2\n");
        printf("press 3 to Print Program 3\n");
        printf("press 4 to Print Program 4\n");
        printf("press 5 to Print Program 5\n");

        scanf("%d",&op);

        switch(op){
            case 1:
                program1();
                break;
            case 2:
                program2();
                break;
            case 3:
                program3();
                break;
            case 4:
                program4();
                break;
            case 5:
                program5();
                break;
            default:
                printf("Something went wrong");
        }

        printf("\nIf you want to continue code then press 1: ");
        scanf("%d",&i);

    }while(i==1);
}
