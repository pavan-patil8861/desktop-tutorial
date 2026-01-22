#include <stdio.h>

int main() {
    int arr[5] = {-20, 2, -25, 26, -28};

    for(int i = 0; i < 5; i++) {
        if(arr[i] < 0) {
            printf("%d ", arr[i]);
        }
    }
    return 0;
}


