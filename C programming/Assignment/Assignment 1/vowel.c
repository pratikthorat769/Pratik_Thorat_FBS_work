#include<stdio.h>
int main(){
    
    char letter='e';
    if(letter=='a'||letter=='e'||letter=='i'||letter=='o'||letter=='u' ){
        printf("letter is vowel:%c",letter);

    }
    else{
        printf("letter is not vowel:%c",letter);
    }
    return 0;
}