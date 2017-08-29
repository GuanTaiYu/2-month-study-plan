/*************************************************************************
	> File Name: ol3.c
	> Author: 
	> Mail: 
	> Created Time: 2017年08月24日 星期四 19时59分48秒
 ************************************************************************/

#include<stdio.h>

#define NUM 600851475143

int main(){
    int num = NUM;
    int max_prime;
    for(int i = 2; i * i <= NUM; i++){
        while(num % i == 0){
            num /= i;
            max_prime = i;
        }
    }
    if(num != 1){
        max_prime = num;
    }
    printf("%d" , max_prime);
    return 0;
}
