
#include<stdio.h>

void displayAgeOfMembers(int age[5]){

  printf("Student marks {");
    for(int i=0;i<s;i++) {
        printf("%d ",marks[i]);
    }
    printf("}\n");

}
void main(){
//value type /Reff type  variable [10]
//single Dimentinal Array
int sm[5]={66,55,77,99,67};
int sm1[6]={66,65,76,85,93,35};

  displayStudentOfMarks(sm,5);
  printf("\n ++++++++++++++++++++++++++\n");
   displayStudentOfMarks(sm1,6);

  //sm[4]=88;
  //printf("%d ",sm[4]);


}


____________

#include<stdio.h>
float avg(float ar[],int size);
void showRadiuses(float temp[], int size){
  printf("Radius ==> {");
   for(int i=0;i<size;i++){
    printf("%.2f ",temp[i]);
   }
  printf("}\n");
}

float  avg(float ar[], int s){

    float sum=0;
   for(int i=0;i<s;i++){
    float area=ar[i]*ar[i]*3.14;
    printf("Area of Circle %.2f == %.2f\n",ar[i],area);
    sum+=area;
   }
   printf("Total sum of Area %.2f\n ",sum);
   float avrg =sum/5;
   //printf("Avrage area is ==> %.2f ",avrg);
   return avrg;
}
void main(){
   float r[5]={1,2.4,4.7,7.5,8.9};
   showRadiuses(r,5);
   printf("\n++++++++++++++++++\n");
   float a=avg(r,5);
   printf("Avrage area is ==> %.2f ",a);

}
