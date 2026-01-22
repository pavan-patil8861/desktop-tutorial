//#include <stdio.h>
//int main(){
//
//for (int i=0;i<5;i++){
//    int digit =(i%2==0)? 1:0;
//    for(int j=0;j<5;j++)
//        {
//        printf("%d",digit);
//
//
//
//        }
//printf("\n");
//}
//    return 0;
//}

//#include <stdio.h>
//int main(){
//for(int i=0; i<5; i++){
//    for(int j=0; j<5; j++)
//    {
//
//
//        int sum =(j%2==0)? 0:1;
//
//            printf("%d",sum);
//
//
//         }
//         printf("\n");
//}
//return 0;
//}


//#include <stdio.h>
//int main(){
//for (int i=0; i<5; i++){
//    for(int j=0; j<5; j++){
//        if(i==0 || i==4 || j==0 || j==4)
//            printf("1");
//        else
//            printf("0");
//    }
//    printf("\n");
//}
//return 0;
//}

//#include <stdio.h>
//int main(){
//for (int i=0; i<5; i++){
//    for(int j=0; j<5; j++){
//        if(i==0 || i==1 ||i==3 || i==4 || j==0 || j==1 ||j==3 || j==4 )
//            printf("1");
//        else
//            printf("0");
//    }
//    printf("\n");
//}
//return 0;


#include <stdio.h>
int main(){
for(int i =0; i<5; i++){
    for(int j=0; j<5;j++){
    int sum=((i+j)%2==0)? 1:0;
        printf("%d",sum);


    }
    printf("\n");
}
return 0;
}

//#include <stdio.h>
//int main(){
//for (int i=0; i<5; i++){
//    for(int j=0; j<5; j++){
//        if(i==2 || j==2 )
//            printf("0");
//        else
//            printf("1");
//    }
//    printf("\n");
//}
//return 0;
//}

//#include <stdio.h>
//int main(){
//    int n=5;
//
//for(int i=0; i<5; i++)
//{
//    for (int j=0; j<5; j++)
//    {
//        if(i == j || i+j == n - 1)
//            printf("1");
//        else
//            printf("0");
//
//    }
//
//
//     printf("\n");
//
//}
//  return 0;
//}

//#include <stdio.h>
//int main()
//{
//    int n=5;
//
//    for(int i=0; i<5; i++){
//        for (int j=0; j<5; j++){
//
//        if((i==0 || i==n-1)&&(j>0 && j<n-1))
//                printf("1");
//            else if((j==0 || j==n-1)&&(i>0 && i<n-1))
//                printf("1");
//                else
//                    printf("0");
//        }
//        printf("\n");
//    }
//    return 0;
//}

#include <stdio.h>

int main()
{
    for(int i=0; i<5; i++ ){
        for(int j=0; j<5; j++){
            printf("%d",i+j);
        }
        printf("\n");
    }

    return 0;
}







