/*************************************************************************
	> File Name: ktlx14.c
	> Author: 
	> Mail: 
	> Created Time: 2017年08月31日 星期四 09时19分12秒
 ************************************************************************/

#include <stdio.h>
#include <stdarg.h>

int max_int(int num , ...){
    int ans = 0 , temp;
    va_list arg;
    va_start(arg , num);
    while(num--){
        temp = va_arg(arg , int);
        if(temo > ans){
            ans = temp;
        }
    }
    va_end(arg);
    return ans;
}

int main(){
    printf("%d\n" , max_int(3 , 1 , 5 , 3));
    printf("%d\n" , max_int(2 , 1 , 3));
    printf("%d\n" , max_int(6 , 6 , 5 , 3 , 7 , 9 , 10));
    printf("%d\n" , max_int(3 , 1 , 9 , 10));
    return 0;
}


