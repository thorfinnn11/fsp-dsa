#include<stdio.h>
void main(void){
    int arr[] = {25,30,45,50,55,60,65, 65};
    int length = sizeof(arr) / sizeof(arr[0]);
    int largest = arr[0];
    int secLar = arr[0];
    for(int i = 0; i < length; i++){
        if (arr[i] > largest){
            largest = arr[i];
           }
    }

    for(int i = 0; i < length; i++){
        if (arr[i] == largest){
            continue;
           }
        else if (arr[i] > secLar){
            secLar = arr[i];
        }
    }

    printf("The second largest element is: %d ", secLar);

}