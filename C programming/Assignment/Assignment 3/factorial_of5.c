#include<stdio.h>
int main(){
    int num=5;
    int fact=1;
    int i=1;
    while(i<=num){
    fact=fact*i;
    i++;
    }
    printf("factorial of 5:%d",fact);
    return 0;
}