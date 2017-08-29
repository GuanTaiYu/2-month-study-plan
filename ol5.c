/*************************************************************************
	> File Name: ol5.c
	> Author: 
	> Mail: 
	> Created Time: 2017年08月25日 星期五 20时11分20秒
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>

int gcd(int a , int b) {
    if (!b) {
        return a;
    }
    return gcd(b , a % b);
}
 
int main() {
    int ans = 1;
    for (int i = 1; i <= 20; i++) {
        ans *= i / gcd(i , ans);
    }
    printf("%d\n", ans);
    return 0;
}
