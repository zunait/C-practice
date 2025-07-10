//Calculate and print the sum of all odd numbers between 1 and 50.
#include<stdio.h>

int main(){
  int n;
  printf("Enter range = ");
  scanf("%d",&n);
  int sum=0;
  for(int i=1;i<=n;i+=2){
    sum+=i;
  }
  printf("sum =%d",sum);
  return 0;
}