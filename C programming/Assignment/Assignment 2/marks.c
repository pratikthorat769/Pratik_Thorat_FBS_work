#include<stdio.h>
int main(){
    int marks=23;
    if(marks>40){
        if(marks>75)
        printf("Distinction");
        else if(marks>65)
        printf("first class");
        else if(marks>55)
        printf("second class");
        else 
        printf("pass class");
    }
    else
    printf("fail");
    return 0;
}