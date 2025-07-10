// diamond with numbers
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);

    int m=0;
    int c=(n-1)/2;
    for(int i=1; i<=n; i+=2){
        for(int j=1; j<=(n-i)/2; j++){
            printf(" ");
        }
        m++;
        int var = m;
        for(int k=1; k<=i; k++){
            if(k<i/2+1){ //halfway ++
                printf("%d",var);
                var++;
            }
            else{ //other way --
                printf("%d",var);
                var--;
            }
        }
        printf("\n");
    }
    for(int i=1; i<n; i+=2){
        for(int j=1; j<=i; j+=2){
            printf(" ");
        }
        int var=c;
        for(int k=1; k<=n-i-1; k++){
            
            if(k<c){ //halfway ++
                printf("%d",var);
                var++;
            }else{ //other way --
                printf("%d",var);
                var--;
            }
        }
        c--;
        printf("\n");
    }
    return 0;
}