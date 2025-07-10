//Print all even numbers from 1 to 20.
#include<stdio.h>
int main(){
  int n;
  printf("Enter range = ");
  scanf("%d",&n);

  for(int i=1; i<=n; i++){
    if(i%2==0){
      printf("%d ",i);
    }
  }
  return 0;
}