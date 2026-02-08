#include<stdio.h>
int main(){
    int price=200;
    char user='Y';
    float discount;
    float final_price;
    if(user=='Y' ||user=='y'){
        if(price>500){
            discount=price*(20.0/100);
            final_price=price-discount;
            printf("final price is:%.2f",final_price);
        }
        else{
            discount=price*(10.0/100);
            final_price=price-discount;
            printf("final price is:%.2f",final_price);
        }
    }
    else{
        if(price>600){
            discount=price*(15.0/100);
             final_price=price-discount;
            printf("final price is:%.2f",final_price);
        }
        else{
            discount=0;
            final_price=price-discount;
            printf("The price is :%.2f",final_price);
        }

    }
    return 0;

}