/*************************************************************************
	> File Name: ktlx17.c
	> Author: 
	> Mail: 
	> Created Time: 2017年09月02日 星期六 09时50分03秒
 ************************************************************************/

#include<stdio.h>

int main(){
    int numbers[2][3][4] = {
        {
            {10,20,30,40},
            {15,25,35,45},
            {47,48,49,50}
        },
        {
            {10,20,30,40},
            {15,25,35,45},
            {47,48,49,50}
        }
    };
    int sum = 0;
    for(int i = 0; i < 2;++i){
        for(int j = 0; j < 3; ++j){
            for(int k = 0; k < 4;++k){
                sum += numbers[i][j][k];
            }
        }
    }
    printf("The sum of the values in the numbers array is %d.\n", sum);
    return 0;
}
