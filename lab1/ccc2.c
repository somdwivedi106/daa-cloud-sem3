
//Start.
//Initialize the array arr = {1, 2, 5, 7, 9}.
//Compare arr[i] with arr[i + 1].
//If arr[i] is greater than arr[i + 1], print arr[i].
//Stop.


#include<stdio.h>
int main(){
int arr[]= {1,2,5,7,9};

for(int i = 0; i < 5; i++) {
   if(arr[i]>arr[i+1]){
    printf("%d ", arr[i]);
}}
}