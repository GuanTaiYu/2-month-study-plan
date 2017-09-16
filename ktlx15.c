/*************************************************************************
	> File Name: ktlx15.c
	> Author: 
	> Mail: 
	> Created Time: 2017年09月02日 星期六 08时42分50秒
 ************************************************************************/

#include<stdio.h>

int main(){
    int grades[10];
    unsigned int count = 10;
    long sum = 0;
    float average = 0.0;
    printf("\nEnter the 10 grades:\n");
    for(unsigned int i = 0; i < count; ++i){
        printf("%2u>" , i + 1);
        scanf("%d" , &grades[i]);
        sum += grades[i];
    }
    average = (float)sum / count;
    for(unsigned int i = 0;i < count; ++i){
        printf("\nGrade Number %2u is %3d" , i + 1, grades[i]);
    }
    printf("\nAverage of the ten grades entered is: %.2f\n" , average);
    return 0;
}
