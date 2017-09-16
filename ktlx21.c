/*************************************************************************
	> File Name: ktlx21.c
	> Author: 
	> Mail: 
	> Created Time: 2017年09月16日 星期六 08时24分47秒
 ************************************************************************/

#include<stdio.h>

int binary_search(int *num, int x, int n){
    int head, tail, mid;
    mid = (head + tail) >> 1;
    while(head <= tail){
        if(num[mid] == x){
            return mid;
        }
        else if(num[mid] < x){
            head = x + 1;
        }
        else{
            tail = x - 1;
        }
        mid = (head + tail) >> 1;
    }
    return -1;
}
