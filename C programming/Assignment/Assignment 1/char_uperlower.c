#include<stdio.h>
int main(){
    char ch='S';
    if(ch>='a'&& ch<='z'){
        printf("character is lower case:%c",ch);
    }
    else{
        printf("character is uppercase:%c",ch);
    }
    return 0;
}