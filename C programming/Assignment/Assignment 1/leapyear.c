#include<stdio.h>
int main(){
    int year=2068;
    if(year%4==0 && year%100 !=0 || year%400==00){
        printf("the year is even:%d",year);
    }
    else{
        printf("the year is:%d",year);
    }
    return 0;
}