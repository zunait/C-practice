//     1
//    1 1
//   1 2 1
//  1 3 3 1
// 1 4 6 4 1

#include<stdio.h>
int main(){
    int n;
    printf("Enter an odd number :");
    scanf("%d",&n);

    for(int i=1; i<=n; i++){
        //right part of the triangle or ascending part

        for(int j=i; j<=n-1; j++){
            printf(" ");
        }
        int val = 1;
        for(int k=1; k<=i; k++){
            printf("%d ", val);
            val = val * (i-k) / k;
        }
        printf("\n");
    }
    return 0;
}