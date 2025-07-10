#include<stdio.h>
int main(){
    int n;
    printf("Enter an odd number :");
    scanf("%d",&n);

    //upper pyramid of the diamond
    for(int i=1; i<=n; i+=2){
        for(int j=n-1; j>=i; j-=2){
            printf(" ");
        }
        for(int k=1; k<=i; k++){
            if(k==1 || k==i){
                printf("*");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
    for(int i=1; i<n; i+=2){
        for(int j=1; j<=i; j+=2){
            printf(" ");
        }
        for(int k=n-2; k>=i; k--){
            if(k==n-2 || k==i){
                printf("*");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}