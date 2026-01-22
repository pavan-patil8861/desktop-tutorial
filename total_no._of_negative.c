#include <stdio.h>

int main() {
    int arr[5] = {-10, -20, 30, -40, 50};
    int count = 0;

    for(int i = 0; i < 5; i++) {
            if(arr[i]<0){
                count ++;
            }
    }

    printf("The total no. of negative elements = %d", count);

    return 0;
}

