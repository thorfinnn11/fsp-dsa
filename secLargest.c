#include<stdio.h>
#include<limits.h>

int main(void){
    int arr[] = {25,30,45,50,55,60,65, 65};
    int length = sizeof(arr) / sizeof(arr[0]);
    int largest = arr[0];
    int secLar = INT_MIN;
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

    if(secLar == INT_MIN)
        printf("No distinct second largest element exist!");
    else
        printf("The second largest element is: %d ", secLar);

    return 0;

}