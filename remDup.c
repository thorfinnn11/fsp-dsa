#include <stdio.h>

int main(void) {

    int arr[] = {1, 2, 3, 5, 5, 7, 5, 15, 15};
    int length = sizeof(arr) / sizeof(arr[0]);
    int j = 0;
    for (int i = 0; i < length; i++) {
        if(arr[i] != arr[j]){
            j++;
            arr[j] = arr[i];
        }
    }

    int newLength = j + 1;
    printf("The new array: ");
    for(int i = 0; i < newLength ; i++){
        printf("%i ", arr[i]);
    }
    return 0;
}