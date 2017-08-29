/*************************************************************************
	> File Name: ktlx1.c
	> Author: 
	> Mail: 
	> Created Time: 2017年08月23日 星期三 18时52分15秒
 ************************************************************************/

#include<stdio.h>

void printf_binary(unsigned int n){
    int num[100];
    int ind = 0；
    while(n){
        num[ind++] = n % 2;
        n /= 2;
    }
    for(int i = ind - 1; i >= 0; i--){
        printf("%d" , num[i]);
    }
    printf("\n");
}

int main(){
    int a , b;
    scanf("%d%d" , &a , &b);
    printf("%d + %d = %d\n" , a , b , a + b);
    printf("%d - %d = %d\n" , a , b , a - b);
    printf("%d * %d = %d\n" , a , b , a * b);
    printf("%d / %d = %d\n" , a , b , a / b);
    printf("%d % %d = %d\n" , a , b , a % b);
    printf_binary(a);
    printf_binary(~a);
    printf_binary(b);
    printf("%d & %d = %d\n" , a , b , a - b);
    printf("%d | %d = %d\n" , a , b , a - b);
    printf("%d ^ %d = %d\n" , a , b , a - b);
    printf("~%d = %d\n" , a , ~a);
    printf("%d << 3 = %d\n" , a , a << 3);
    printf("%d >> 2 = %d\n" , a , a >> 2);
    return 0;
}
