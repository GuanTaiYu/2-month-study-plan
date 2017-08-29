/*************************************************************************
	> File Name: 3.c
	> Author: 
	> Mail: 
	> Created Time: 2017年08月28日 星期一 15时14分38秒
 ************************************************************************/

#include<stdio.h>

int main(){
    int n;
    scanf("%d" , &n);
    switch(n){
        case 1:
            printf("one ");
        case 2:
            printf("two ");
        case 3:
            printf("three\n");
            break;
        default:
            printf("error\n");
            break;
    }
    return 0;
}
