#include<stdio.h>
int main(){
    int a=10,b=20,c=30;
    if(a>b && a>c){
        printf("A is greater:%d",a);
    }
    else{
        if(b>a && b>c){
            printf("B is greater:%d",b);
        }
        else{
            printf("C is greater:%d",c);
        }
    }
    return 0;
}