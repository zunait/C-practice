#include<stdio.h>
int main(){
    int a=0, b=1,n;
    scanf("%d",&n);
    printf("Here is fibonacci series until %d.\n",n);

    while(a<=n){
        printf("%d ",a);
        int temp = a+b;
        a=b;
        b=temp;
    }
    return 0;
}