#include<stdio.h>

int main(void){
    int arr[] = {25,30,45,50,55,60,65};
    int length = sizeof(arr) / sizeof(arr[0]);
    int sorted = 1;
    for(int i = 0; i < length-1; i++){
        if(arr[i] > arr[i+1])
            sorted = 0;
            continue;
    }
    if(sorted == 0)
        printf("Not sorted");
    else
        printf("Sorted");
}