//     1
//    121
//   12321
//  1234321
// 123454321

#include<stdio.h>
int main(){
    int n;
    printf("Enter a number :");
    scanf("%d",&n);

    for(int i=1; i<=n; i++){
        for(int j=i; j<=n-1; j++){
            printf(" ");
        }
        for(int k=1; k<=i; k++){
            printf("%d",k);
        }
        for(int l=i-1; l>=1; l--){
            printf("%d",l);
        }
        printf("\n");
    }

    return 0;
}