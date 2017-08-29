/*************************************************************************
	> File Name: ktlx3.c
	> Author: 
	> Mail: 
	> Created Time: 2017年08月23日 星期三 19时40分25秒
 ************************************************************************/

#include<stdio.h>

int printf_binary(unsigned int n){
    int str[100];
    int ind = 0;
    while(n){
        str[ind++] = n % 2;
        n >>= 1; 
    }
    for(int i = 31; i >= 0; i--){
        if(i % 8 == 0){
            printf(" ");
        }
        printf("%d" , str[i]);
    }
    printf("\n");
    return 0;
}
int main(){
    int a , b ,c ,d;
    int ip = 0;
    scanf("%d.%d.%d.%d" , &a , &b , &c , &d);
    char *p = (char *)&ip;
    p[0] = d;
    p[1] = c;
    p[2] = b;
    p[3] = a;
    printf_binary(a);
    printf_binary(b);
    printf_binary(c);
    printf_binary(d);
    //printf_binary(ip)
    printf("ip : %d\n" , ip);  
    return 0;
}
