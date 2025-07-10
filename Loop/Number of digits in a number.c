#include <stdio.h>
int main() {
    int num,count;
    scanf("%d",&num);
    for(count=0;num>0;count++){
        num/=10;
    }
    printf("%d",count);
    return 0;
}