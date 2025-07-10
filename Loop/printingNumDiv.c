//Find and print all numbers between 1 and 100 that are divisible by 3 but NOT by 5. Also, count how many such numbers there are and print the count at the end.
#include<stdio.h>
int main(){
  int count=0;
  for(int i=1; i<=100; i++){
    if(i%3==0 && i%5!=0){
      count++;
      printf("%d ",i);
    }
  }
  printf("\ncount =%d",count);
  return 0;
}