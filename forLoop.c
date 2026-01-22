/*1
#include <stdio.h>
int main(){

int i,j;

for(i=1;i<=5;i=i+1){

    for(j=1;j<=5;j=j+1)
    {
       printf("I: %d  J: %d",i,j);
    }
    printf("\n");
}
return 0;
}*/

/*2
#include <stdio.h>
int main(){
int i,j,k;

for(i=1;i<=5;i=i+1){

    for(j=1;j<=5;j=j+1)
    {
       printf("I: %d  J: %d",i,j);
    }

    for(k=1;k<=3;k=k+1){
        printf("K: %d",k);
    }
    printf("\n");
}
return 0;
}
*/
/*3
#include <stdio.h>

int main() {
    int i, j;

    for(i = 1; i <= 5; i = i + 1) {
        for(j = 1; j <= 5; j = j + 1) {
            printf("%d", i);   // printing i
        }
        printf("\n");
    }

    return 0;
}
*/
/*4
#include <stdio.h>

int main() {
    int i, j;

    for(i = 1; i <= 5; i = i + 1) {
        for(j = 1; j <= 5; j = j + 1) {
            printf("%d", j);   // printing j
        }
        printf("\n");
    }

    return 0;
}
*/
/*5
#include <stdio.h>

int main() {
    int i, j, k;

    for(i = 1; i <= 5; i = i + 1) {

        for(j = 1; j <= 5; j = j + 1) {

            for(k = 1; k <= 3; k = k + 1) {
                printf("%d%d%d", i, j, k);
            }

            printf("\n");
        }

        printf("\n");
    }

    return 0;
}
*/
/*
#include <stdio.h>

int main() {
    int m = 11;
    int n = 1;

    for(m = 12; m <= 15; m = m + 1) {
        for(n = 1; n < 4; n = n + 1) {
            printf("%d", m - n);
        }
    }

    return 0;
}
*/

#include <stdio.h>

int main() {
    int i, j, k;

    for(i = 1; i < 3; i = i + 1) {

        for(j = 1; j < 3; j = j + 1) {

            for(k = 1; k < 3; k = k + 1) {
                printf("%d \n", i + j + k);
            }

        }
    }

    return 0;
}




