#include<stdio.h>

int main(void){
    int arr[] = {25,30,45,50,55,60,65};

    int k = 3;

    int length = sizeof(arr) / sizeof(arr[0]);
    
    for(int j = 0; j < k; j++){
        int temp = arr[0];
        for(int i = 0; i < length -1 ; i++){
        arr[i] = arr[i+1];
        }

        arr[length-1] = temp;
    }

    printf("THe new array elements are:\n");
    for(int i = 0; i < length ; i++){
        
        printf("%d ", arr[i]);
    }
}