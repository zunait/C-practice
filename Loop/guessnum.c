//odd loop experiment
#include<stdio.h>
#include<conio.h>

int main(){
  int n,count=0;
  printf("Guess a number between 1-10\n");
  printf("You will only get 5 guesses\n");
  printf("Guess the number :");
  while(n!=10){
    scanf("%d",&n);
    count++;
    if(count==5){
      printf("You failed!");
      break;
    }else if(n==10){
      printf("Great! You've done it");
    }else{
      printf("Try again :");
    }
  }
  printf("\nPress enter to exit...");
  while(1){
    char key = getch();
    if(key==13)break;
  }
  return 0;
}