/*************************************************************************
	> File Name: ol2.c
	> Author: 
	> Mail: 
	> Created Time: 2017年08月23日 星期三 19时21分33秒
 ************************************************************************/

#include<stdio.h>

int main(){
    int f[200] = {0};
    f[0] = 2;
    f[1] = 1; f[2] = 2;
    while(f[f[0]] < 40000000){
        f[0]++;
        f[f[0]] = f[f[0] - 1] + f[f[0] - 2];
    }
    int sum = 0;
    for(int i = 1; i < f[0]; i++){
        if(f[i] % 2 == 0){
            sum += f[i];
        }
    }
    printf("%d\n" , sum);
    return 0;
}