//#include<stdio.h>
//int main()
//{
//int n;
//printf("Enter Any Number");
//scanf("%d",&n);
//int last = n%10;
//int Firstdigit;
//for (int i = n; i>0; i=i/10){
//    Firstdigit = i%10;
//
//}
//printf(" Sum Last And First ==> %d", last + Firstdigit);
//
//    return 0;
//}

//#include <stdio.h>
//int main(){
//
//int num;
//
//printf("Enter a num: ");
//scanf("%d", &num);
//
//if(num>0)
//    printf("num is positive");
//else if(num<0)
//printf("num is negative");
//else
//    printf("num is zero");
//
//    return 0;
//}

//#include <stdio.h>
//int main(){
//
//char ch;
//
//printf("Enter any character: ");
//scanf("%c", &ch);
//
//if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
//    printf("Character is alphabet");
//else if (ch>= '0' && ch<= '9')
//    printf("Character is digit");
//else
//    printf("Character is special character");
//
//    return 0;
//}

//#include <stdio.h>
//int main(){
//
//int n;
//
//printf("Enter a number: ");
//scanf("%d",&n);
//
//if(n/2 == 0)
//printf("The given number is even");
//else
//    printf("The given number is odd");
//
//    return 0;
//}

//#include <stdio.h>
//int main(){
//int i=1;
//
//while(i<=100){
//    if(i%2==0)
//        printf("%d",i);
//        i++;
//}
//return 0;
//}

#include<stdio.h>
int main(){
int n;

printf("Enter a value n: ");
scanf("%d",&n);
for(int i=n; i>=1; i--){
    printf("%d\n",i);
}

return 0;
}
