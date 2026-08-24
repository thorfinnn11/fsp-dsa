#include<stdio.h>

int main(void){
    char str[] = "12349678658532248";
    
    int last = -1;
    for (int i =0; str[i] != '\0'; i++){
        if(str[i] >= '0' && str[i] <= '9'){
            int digit = str[i] - '0';
        
            if(digit%2!=0){
                last = i;
            }
        
        }
        
    }
    for(int i = 0; i <= last; i++){
        printf("%c",str[i]);
    }
}