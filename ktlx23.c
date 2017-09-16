/*************************************************************************
	> File Name: ktlx23.c
	> Author: 
	> Mail: 
	> Created Time: 2017年09月16日 星期六 08时41分00秒
 ************************************************************************/

#include<stdio.h>

#define DEBUG

#ifdef DEBUG
#define log(frmt, args...){ \
    printf("[%s : %d] ", __func__, __LINE__);
    printf(frmt, ##args); \
    printf("\n"); \
}
#else
#define log(frmt, args...){\
}
#endif

int main(){
    log("%d", 3);
    log("this is my log");
    return 0;
}

