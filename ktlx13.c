/*************************************************************************
	> File Name: ktlx13.c
	> Author: 
	> Mail: 
	> Created Time: 2017年08月31日 星期四 10时10分35秒
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>
 
int64_t gcd(int64_t a,int64_t b) {
    if (!b) return a;
    return gcd(b, a % b);
}
 
int main() {
    int64_t ans = 1;
    for (int64_t i = 1; i <= 20; ++i) {
        ans *= i / gcd(i, ans);
    }
    printf("%"PRId64"\n", ans);
    return 0;
}
