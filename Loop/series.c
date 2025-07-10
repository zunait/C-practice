// Print the first 10 terms of the series:
// 1, 3, 6, 10, 15, 21, ...

//Obsevation:
// 1,1+2,1+2+3,1+2+3+4,1+2+3+4+5,...

#include<stdio.h>
int main(){
  int sum=0,n;
  printf("How many number do you want in the series: ");
  scanf("%d",&n);
  for(int i=1; i<=n; i++){
    sum+=i;
    printf("%d, ",sum);
  }
}
