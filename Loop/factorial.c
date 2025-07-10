// Print the factorial of a given number n (assume n ≤ 10)
// You’ll need to:

//     Ask the user to enter a number (scanf)

//     Use a loop to calculate n! (factorial of n)

//     Print the result

// fact of 5 = 1*2*3*4*5
// i just have to multiply from 1 until n

#include<stdio.h>
int main(){
  int n,fac=1;
  printf("Enter a number :");
  scanf("%d",&n);
  if(n>10){
    printf("This seems too big enter only up to 10.\nPlease try again");
  }else{
    for(int i=1; i<=n; i++){
      fac*=i;
    }
    printf("Factorial of %d is = %d",n,fac);
  }
  
  return 0;
}