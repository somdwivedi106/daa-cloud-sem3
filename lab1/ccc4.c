#include<stdio.h>
int main(){
int arr[]= {1,2,5,7,9};
int max = arr[0];
int min = arr[0];
for(int i = 0; i < 5; i++) {
   if (arr[i]>max){
    max = arr[i];
   }
   if (arr[i]<min){
    min = arr[i];
   }


}
printf("%d ", max);
printf("%d",min);


}

