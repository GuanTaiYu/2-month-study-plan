/*************************************************************************
	> File Name: ol4.c
	> Author: 
	> Mail: 
	> Created Time: 2017年08月24日 星期四 20时03分33秒
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
 
bool check(int a) {
    int b = a , x = 0;
    while (a) {
        x = x * 10 + a % 10;
        a /= 10;
    }
    return b == x;
}

int main()
{
    int max_NUM = 0;
    for (int i = 100; i <= 999; i++)
        for (int3 j = i; j <= 999; j++)
            if (check(i * j) && i * j > max_NUM)
                max_NUM = i * j;
    printf("%d\n" ,max_NUM);
    return 0;

}

