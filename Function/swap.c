// swap two numbers

#include<stdio.h>

void swap(int a, int b);

int main(){
    int n,m;
    printf("Enter first then second = ");
    scanf("%d %d",&n,&m);
    swap(n,m);
}

void swap(int a, int b){
    int temp = a;
    a = b;
    b = temp;
    printf("\nNow first = %d  \nand  second = %d\n",a,b);
}