//i am going to make a program that prints hallow diamond

#include<stdio.h>
int main(){
    int n;
    printf("How big the diamond should be enter layer number : ");
    scanf("%d",&n);
    if(n%2!=0){
        printf("Here is your diamond :");
    }else{
        printf("Enter an odd number!");
        return 0;
    }

    //first lets work with upper part of the diamond

    for(int i=0; i<n; i+=2){
        for(int j=n-1; j>i; j-=2){
            printf(" ");
        }
        for(int k=0; k<=i; k++){
            printf("*");
        }

        printf("\n");
    }
    //now lower part(pyramid) of the diamond shape

    for(int i=1; i<n; i+=2){
        for(int j=1; j<=i; j+=2){
            printf(" ");
        }
        for(int k=n-2; k>=i; k--){
            printf("*");
        }

        printf("\n");
    }

    return 0;
}