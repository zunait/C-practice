#include<stdio.h>
int main(){
    int n;
    printf("Enter row number = ");
    scanf("%d",&n);

    //taking only odd values as input
    if(n%2==0){
        printf("Please enter an odd number!\n\n");
        return 0;
    }
    // for upper part of the diamond
    int mid = (n+1)/2;
    for(int i=1; i<=mid; i++){
        // for spaces
        for(int j=1; j<=(mid-i); j++){
            printf(" ");
        }
        // for stars
        for(int k=1; k<=(2*i)-1; k++){
              printf("*");
          }
        // for lines
        printf("\n");
    }

    //now lower part of the diamond
    int lower_mid = (n-1)/2;
    for(int i=lower_mid; i>=1; i--){

        // for spaces
        for(int j=lower_mid; j>=i; j--){
            printf(" ");
        }

        // for stars
        for(int k=1; k<=(2*i)-1; k++){
            printf("*");
        }

        // for lines
        printf("\n");
    }

    return 0;
}
