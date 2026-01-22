#include<stdio.h>

void displayPattern1(){
   for (int i=0;i<5;i++){
    int digit =(i%2==0)? 1:0;
    for(int j=0;j<5;j++)
        {
        printf("%d",digit);
        }
printf("\n");
}

}

void displayPattern2(){

  for(int i=0; i<5; i++){
    for(int j=0; j<5; j++)
    {


        int sum =(j%2==0)? 0:1;

            printf("%d",sum);


         }
         printf("\n");
}

}

void displayPattern3(){

  for (int i=0; i<5; i++){
    for(int j=0; j<5; j++){
        if(i==0 || i==4 || j==0 || j==4)
            printf("1");
        else
            printf("0");
    }
    printf("\n");
}
}

void displayPattern4(){
for (int i=0; i<5; i++){
    for(int j=0; j<5; j++){
        if(i==0 || i==1 ||i==3 || i==4 || j==0 || j==1 ||j==3 || j==4 )
            printf("1");
        else
            printf("0");
    }
    printf("\n");
}
}
void displayPattern5(){
for(int i =0; i<5; i++){
    for(int j=0; j<5;j++){
    int sum=((i+j)%2==0)? 1:0;
        printf("%d",sum);


    }
    printf("\n");
}
}



void main(){

    int op,num,i=0;
    do{
    printf("press 1 to Print PatternNO.1\n");
    printf("press 2 to Print PatternNo.2\n");
    printf("press 3 to Print PatternNo.3\n");
    printf("press 4 to Print PatternNo.4\n");
    printf("press 5 to Print PatternNo.5\n");

     scanf("%d",&op);

     switch(op){
        case 1:
            displayPattern1();
            break;
        case 2:
            displayPattern2();
            break;
        case 3:
            displayPattern3();
            break;
        case 4:
            displayPattern4();
            break;
        case 5:
            displayPattern5();
            break;

        default :
            printf("Something went Wrong");

     }

     printf("\nIf you want to continue the code then press 1: ");
     scanf("%d",&i);
    }
    while(i==1);
}
