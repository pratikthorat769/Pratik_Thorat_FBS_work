#include<stdio.h>
int main(){
int num1=10,num2=20;
char ch='*';
if(ch=='+')
printf("sum is:%d",num1+num2);
else if(ch=='-')
printf("sub is:%d",num1-num2);
else if(ch=='*')
printf("mul is:%d",num1*num2);
else if(ch=='/')
printf("Div is:%f",num1/num2);
else if(ch=='%')
printf("mod is:%d",num1%num2);
else
printf("your operator is invalid");
return 0;
}

