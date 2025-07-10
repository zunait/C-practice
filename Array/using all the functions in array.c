#include<stdio.h>

// prototype of input taker function
void input_taker(int array[],int size);
int total_grade(int array[],int size);
int average(int totalgrade,int size);

int main(){
    int array_size;
    printf("first enter number of students = ");
    scanf("%d",&array_size);
    int arr[array_size];

    //call of function input taker
    input_taker(arr,array_size);
    printf("\n\n\n");
    for(int i=0; i<array_size; i++){
        printf("grade of student %d = %d\n",i+1,arr[i]);
    }
    int sum = total_grade(arr,array_size);
    int aver = average(sum,array_size);

    printf("\nTotal grade is = %d",sum);
    printf("\nAverage grade is = %d",aver);

    printf("\n\n\n");
    return 0;
}

//this function takes input value for the array
void input_taker(int array[],int size){
    printf("now enter their grades \n\n\n");

    for(int i=0; i<size; i++){
        printf("grade of student %d = ",i+1);
        scanf("%d",&array[i]);
    }

}

int total_grade(int array[],int size){
    int total = 0;
    for(int i=0; i<size; i++){
        total += array[i];
    }
    return total;
}

int average(int totalgrade,int size){
    int avg = totalgrade / size;
    return avg;
}