#include<stdio.h>
int main(){
    int a=5,b=5,c=5;
    if(a+b>c && a+c>b && b+c>a)
    {
        if(a==b&&b==c)
        printf("its equilateral triangle");
        else if(a==b||b==c||a==c)
        printf(" it's isoceles triangle");
        else
            printf("its scalene triangle");
        
    }
    else
    printf("its not triangle:");
    return 0;
}