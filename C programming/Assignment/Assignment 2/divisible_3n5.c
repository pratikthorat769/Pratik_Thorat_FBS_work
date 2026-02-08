#include<stdio.h>
int main(){
    int num=16;
    if(num%3==0 && num%5==0)
    printf("the number is divisible by both 3 and 5");
    else if(num%3==0)
    printf("the number is divisible by 3");
    else if(num%5==0)
    printf("the number is divisible by 5");
    else
    printf("number is not divisible by 3 and 5");
    return 0;
}