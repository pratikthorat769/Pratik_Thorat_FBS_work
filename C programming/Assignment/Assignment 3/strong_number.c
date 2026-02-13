#include<stdio.h>
int main(){
    int num=145;
    int temp=num;
    int digit;
    int sum=0;
    while(temp!=0){
        digit=temp%10;
        int i=1;
        int fact=1;
        
        while(i<=digit){
            fact=fact*i;
            i++;
        }
        sum=sum+fact;
        temp=temp/10;
    }
    if(num==sum){
    printf("its strong number");
    }
    else
    printf("its not strong number");
    return 0;
}