#include<stdio.h>

int main(void){
    int arr[] = {1,2,3,4,5,6,7,9,10,11,12,13,14,15};
    int orgSum = 1+2+3+4+5+6+7+8+9+10+11+12+13+14+15;
    int length = sizeof(arr) / sizeof(arr[0]);
    int count = 0; int sum = 0;
    for(int i = 0; i < length; i++){
        sum = sum + arr[i];
    }
    printf("The missing element is %i", orgSum - sum);
}