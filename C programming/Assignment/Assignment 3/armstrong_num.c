#include<stdio.h>
int main(){
     int num=54748;
    int temp =num;
    int sum=0;
    int count=0;
    int digit;
    while(temp>0){// we have use this while to get total count of number 
        
        temp=temp/10;
        count++;

    }
    // printf("%d",count);
     temp=num;// we have redeclared temp because we have use the temp before in above loop then temp value is changed to 0 therefore we are redeclarin
    while(temp>0){// we have to separate and sum the armstrong
        digit=temp%10;
        int power=1;
        int i=1;
        while(i<=count){// we separated here 1 digit and we have to multiply it by its power
           power=digit*power;
           i++;
        }
        sum=sum+power;
        temp=temp/10;
    }
    if(num==sum)
    printf("its an armstrong");
    else
    printf("its not an armstrong");
    return 0;
}
