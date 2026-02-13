#include<stdio.h>
int main(){
    int num=30;
    int i=1;
    int temp=num;
    int sum=0;
    while(i<=num/2){
        if(temp%i==0)
        sum=sum+i;
        i++;
    }
    if(sum==num)
    printf("perfect number");
    else
    printf("not perfect number");
    return 0;
}