#include<stdio.h>
int main(){
    int age=95;
    if(age<12){
        printf("you are child");
    }
    else{
        if(age>=12 && age<=19){
            printf("you are teenager");
        }
        else{
            if(age>=20 && age<=59){
                printf("you are adult");
            }
        else{
            printf("you are senior");
        }
        
        }
    }
}