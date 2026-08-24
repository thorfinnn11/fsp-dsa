#include<stdio.h>

int main(){
    int arr[] = {9,0,0,0,0,3,0,0,5,0,0,0};
    int length = sizeof(arr) / sizeof(arr[0]);
    int j = 0;
    for(int i = 0; i<length-1; i++){
        if (arr[i]!=0){
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            j++;
        }
    }
    for(int i = 0; i<length ; i++){
        printf("%d ", arr[i]);
    }

}