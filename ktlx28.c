/*************************************************************************
	> File Name: ktlx28.c
	> Author: 
	> Mail: 
	> Created Time: 2017年09月16日 星期六 09时59分04秒
 ************************************************************************/

#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#define __STDC_WANT_LIB_EXT1__ 1

int main(){
    char delimiters[] = " \n\".,;:!?) (";
    printf("Enter some prose that is less than %zd characters.\n Terminate input by entering an empty line:\n", str_len);
    while(true){
        if(!fgets(buf, buf_len, stdin)){
            printf("Error reading string.\n");
            return 1;
        }
        if(buf[0] == '\n'){
            break;
        }
        if(strcat_s(str, str_len, buf)){
            printf("Maximum permitted input length exceeded.");
            return 1;
        }
    }
    return 0;
}
