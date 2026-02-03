#include<stdio.h>
int main(){
    int hindi=78,marathi=77,english=65,maths=88,science=56;
    int marks_obtained=hindi+marathi+english+maths+science;
    float percentage=(marks_obtained/500)*100;
    printf("marks obtained are:%d and percentage is:%d",marks_obtained,percentage);
    return 0;
}