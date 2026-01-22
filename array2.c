#include <stdio.h>
int main(){

         int arr[]={20,2,25,26,28};
    int min= arr[0];
    int max= arr[0];

    for(int i=1;i<5;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    printf("minimum no is:%d\n",min);
    printf("maximum no is :%d",max);
 }


#include <stdio.h>
int main(){


         int arr[]={20,2,25,26,28};
    int min= arr[0];
    int max= arr[0];

    for(int i=1;i<5;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    printf("minimum no is:%d\n",min);
    printf("maximum no is :%d",max);
 }
