#include<stdio.h>
#include "zunait.h"

int main(){
    int a = 5,b = 7;
    int sum = add(a,b);
    int difference = diff(a,b);
    printf("sum = %d\ndiff = %d\n", sum, difference);
}