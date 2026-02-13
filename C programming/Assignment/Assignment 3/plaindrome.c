#include<stdio.h>
int main(){
    int num=121;
    int temp=num;
    int digit;
    int rev=0;
    while(temp>0){
        digit=temp%10;
        rev=rev*10+digit;
        temp=temp/10;
    }
    if(rev==num)
    printf("its palindrome");
    else
    printf("its not palindrome");
    return 0;
}