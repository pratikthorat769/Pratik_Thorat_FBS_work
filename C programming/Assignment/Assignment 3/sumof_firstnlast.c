#include<stdio.h>
int main(){
    int num=12345;
    int fd,ld;
    int sum;
    fd=num%10;
    while(num>0)
    {
        ld=num%10;
        num=num/10;
    }
    sum=fd+ld;
    printf("sum is:%d",sum);
    return 0;
}