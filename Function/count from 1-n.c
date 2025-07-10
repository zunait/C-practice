// count from 1-n

#include<stdio.h>

void count(int n);// prototype of the function
int main(){
    int n1;
    scanf("%d",&n1);
    count(n1); //calling the function here n1 is the argument of the function
}
    //declaring the function
void count(int n){          // parameter n
    for(int i=1; i<=n; i++){
        printf("%d ",i);
    }
}