#include <stdio.h>

void displayStudentsOfMarks(int s1, int s2, int a[s1][s2]){
    for(int i=0; i<s1; i++){
        printf("Roll no. %d marks ==> {", i+1);
        for(int j=0; j<s2; j++){
            printf("%d ", a[i][j]);
        }
        printf("}\n");
    }
}

int main()
{
    int a[2][2];

    printf("Enter marks for 2 students and 2 subjects:\n");

    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            scanf("%d",&a[i][j]);
        }
    }

    displayStudentsOfMarks(2, 2, a);

    return 0;
}
