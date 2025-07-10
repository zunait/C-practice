// sum of numbers from 1-n

#include<stdio.h>
int sum_of_num(int n);
int main(){
    int num;
    scanf("%d",&num);
    int sum = sum_of_num(num);
    printf("Sum of 1 to %d is = %d",num,sum);
    return 0;
}
int sum_of_num(int n){
    int sum=0;
    for(int i=1; i<=n; i++){
        sum +=i; 
    }
    return sum;
}