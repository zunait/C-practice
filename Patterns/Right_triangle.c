#include <stdio.h>

int main() {
    int n;
    printf("Enter how many layers do you want :\n");
    scanf("%d",&n);

    for(int i=1; i<=n; i++){
        
        for(int j=i; j<n; j++){
            printf(" ");
        }
        for(int k=1; k<=i; k++){
            printf("*");
        }

        printf("\n");
    }
    
    return 0;
}
