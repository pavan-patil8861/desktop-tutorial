#include <stdio.h>

int main() {
    int n;
    printf()
  //  int age[5] = {70, 65, 45, 43, 22};
    float avg;
    int sum = 0;

    printf("Age of Members {");
    for (int i = 0; i < 5; i++){
        printf("%d ", age[i]);
        sum += age[i];
    }
    printf("}\n");

    avg = sum / 5.0;

    printf("Average age = %.2f\n", avg);

    return 0;
}

int arr[5]={1,2,3,4,6}
int first = arr[0];
int last = arr[4];

int totalSum=((first + last)*last)/2;
int sSum=0;
for(int i = 0; i<5; i++){
    aSum+=arr[i];
}

int missingNumber=totalSum-aSum;


#include <stdio.h>

int main() {
    int arr[5] = {1, 2, 3, 4, 6};
    int first = arr[0];
    int last = arr[4];

    int totalSum = ((first + last) * last) / 2;

    int aSum = 0;
    for (int i = 0; i < 5; i++) {
        aSum += arr[i];
    }

    int missingNumber = totalSum - aSum;

    printf("Missing number = %d\n", missingNumber);

    return 0;
}
