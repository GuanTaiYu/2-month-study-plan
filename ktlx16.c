/*************************************************************************
	> File Name: ktlx16.c
	> Author: 
	> Mail: 
	> Created Time: 2017年09月02日 星期六 09时16分11秒
 ************************************************************************/

#include<stdio.h>

int main(){
    long a = 1L, b = 2L, c = 3L;
    double d = 4.0, e = 5.0, f = 6.0;
    printf("A variable of type long occupies %u bytes.", sizeof(long));
    printf("Here are the addresses of some variables of type long:");
    printf("The address of a is: %p The address of b is: %p The address of c is: %p", &a, &b, &c);
    printf("A variable of type doubel occupies %u bytes.", sizeof(double));
    printf("Here are the addresses of some variables of type doubel:");
    printf("The address of d is: %p The address of e is: %p The address of f is: %p", &d, &e, &f);
    return 0;
}

