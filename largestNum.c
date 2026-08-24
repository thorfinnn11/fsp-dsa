#include<stdio.h>
int main(void){
    int arr[] = {25,30,45,50,55,60,65};
    int length = sizeof(arr) / sizeof(arr[0]);
    int largest = arr[0];
    for(int i = 0; i < length; i++){
        if (arr[i] > largest){
            largest = arr[i];
           }
    }
    printf("The largest element is: %d ", largest);

}