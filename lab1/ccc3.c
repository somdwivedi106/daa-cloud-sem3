#include<stdio.h>
int main(){

int sum = 0; 
int arr[]= {1,2,5,7,9};
for(int i = 0; i < 5; i++) {
   sum = sum + arr[i] ;
}
 printf("%d ", sum);
}

///1.Star
//2.Initialize sum = 0.
//3.Create an array arr = {1, 2, 5, 7, 9}.
///4.Repeat for i = 0 to 4:
///5.Add arr[i] to sum.
//6.Print the value of sum.
//7.Stop.