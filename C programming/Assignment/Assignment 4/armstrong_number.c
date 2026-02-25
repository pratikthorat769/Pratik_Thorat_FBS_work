#include<stdio.h>
int main(){
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    printf("the amstrong from 1 to %d are \n",n);
    for(int num=1;num<=n;num++)
    {
        int temp=num,count=0,sum=0;

        while (temp!=0){
        count++;
        temp=temp/10;
        }
        temp=num;
        while(temp!=0){
            int digit=temp%10;
            int power =1;
             
        for(int i=1;i<=count;i++){
            power=power*digit;
            
        }
         sum=sum+power;
         temp=temp/10;

        }  
         if(num==sum)
        printf("%d \n",num);
        
     
    }  
    
        return 0;
        
}