#include<stdio.h>
int main(){
    int n;
    printf("Enter row number = ");
    scanf("%d",&n);
    
    int mid = (n+1)/2;
    //taking only odd values as input
    if(n%2==0){
        printf("Please enter an odd number!\n\n");
        return 0;
    }
    
    // for upper part of the diamond
    
    for(int i=1; i<=mid; i++){
        // for spaces
        for(int j=1; j<=(mid-i); j++){
            printf(" ");
        }
        // for stars
        int temp = i;
        for(int k=1; k<=(2*i)-1; k++){
            if(k<i){
                printf("%d",temp);
                temp++;
            }else{
                printf("%d",temp);
                temp--;
            }
        }
        
        // for lines
        printf("\n");
    }
    
    // now lower part of the diamond
    
    for(int i=mid-1; i>=1; i--){
        
        // for spaces
        for(int j=mid-1; j>=i; j--){
            printf(" ");
        }
        // for stars
        int temp = i;
        for(int k=1; k<=(2*i)-1; k++){
            if(k<i){
                printf("%d",temp);
                temp++;
            }else{
                printf("%d",temp);
                temp--;
            }
        }

        // for lines
        printf("\n");
    }

    return 0;
}
