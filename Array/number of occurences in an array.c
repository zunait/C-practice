#include<stdio.h>
int main(){
    int arr[50] = {12, 3, 7, 12, 19, 5, 3, 8, 14, 7, 9, 5, 3, 14, 6, 17, 20, 8, 12, 10, 1, 4, 6, 11, 3, 14, 9, 5, 12, 17, 19, 2, 8, 3, 5, 6, 13, 18, 12, 9, 3, 6, 14, 12, 5, 20, 1, 3, 6, 10};
    int count = 0;
    for(int i=0; i<50; i++){
        if(arr[i]==12){
            count++;
        }
    }
    printf("The number 12 is %d times in the array.\n\n\n",count);
    return 0;
}