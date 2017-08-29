/*************************************************************************
	> File Name: 2.c
	> Author: 
	> Mail: 
	> Created Time: 2017年08月28日 星期一 15时03分08秒
 ************************************************************************/

#include<stdio.h>

int main(){
    int n;
    scanf("%d" , &n);
    switch(n){
        case 1:
            printf("one\n");
            break;
        case 2:
            printf("two\n");
            break;
        case 3:
            printf("three");
            break;
        default:
            printf("error\n");
            break;
    }
    return 0;
}
