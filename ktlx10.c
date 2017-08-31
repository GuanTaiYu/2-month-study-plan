/*************************************************************************
	> File Name: ktlx10.c
	> Author: 
	> Mail: 
	> Created Time: 2017年08月31日 星期四 08时17分50秒
 ************************************************************************/

#include<stdio.h>

int line_func(int k , int b , int x){
    return (k * x + b);
}

int main(){
    int k , b;
    scanf("%d%d" , &k , &b);
    for(int i = 1; i <= 100; i++){
        printf("f(%d) = %d\n" , i , f(k , b , i));
    }
    return 0;
}
