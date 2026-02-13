#include<stdio.h>
int main(){
    int no=13;
    int i=2;
    int flag=0;
    while(i<=no/2){
        if(no%i==0){
        flag=1;
        break;
    }
    i++;
}
if(flag==0)
printf("number is prime");
else
printf("number is not prime");
return 0;
}