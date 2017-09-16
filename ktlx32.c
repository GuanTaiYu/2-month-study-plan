/*************************************************************************
	> File Name: ktlx32.c
	> Author: 
	> Mail: 
	> Created Time: 2017年09月16日 星期六 11时14分56秒
 ************************************************************************/

#include<stdio.h>
#include<string.h>

int main(){
    char str[11];
    int n;
    while(scanf("%d", &n) != EOF){
        sprintf(str, "%X", n);
        printf("%d(%s) has %lu digits\n", n, str, strlen(str));
    }
    return 0;
}
