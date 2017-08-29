/*************************************************************************
	> File Name: 1.c
	> Author: 
	> Mail: 
	> Created Time: 2017年08月28日 星期一 14时33分17秒
 ************************************************************************/

#include<stdio.h>

int main(){
    int n;
    scanf("%d" , &n);
    if(!n){
        printf("FOOLISH\n");
    }
    else if(n < 60){
        printf("FAIL\n");
    }
    else if(n < 75){
        printf("MEDIUM\n");
    }
    else if(n <= 100){
        printf("GOOD\n");
    }
    return 0;
}
