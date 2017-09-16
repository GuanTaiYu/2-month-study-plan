/*************************************************************************
	> File Name: ktlx29.c
	> Author: 
	> Mail: 
	> Created Time: 2017年09月16日 星期六 10时10分25秒
 ************************************************************************/

#include<stdio.h>
#include<ctype.h>
#define __STDC_WANT_LIb_EXT1__ 1
#define BUF_SIZE 100

int main(){
    char buf[BUF_SIZE];
    int nLetters = 0;
    int nDigits = 0;
    int nPunct = 0;
    printf("Enter an interesting string of less than %d characters:\n", BUF_SIZE);
    if(!gets_s(buf, sizeof(buf))){
        printf("Error reading string.\n");
        return 1;
    }
    size_t i = 0;
    while(buf[i]){
        if(isalpha(buf[i])){
            ++nLetters;
        }
        else if(isdigit(buf[i])){
            ++nDigits;
        }
        else if(ispunct(buf[i])){
            ++nPunct;
        }
        ++i;
    }
    printf("\nYour string containde %d letters, %d digits and %d punctuation characters.\n", nLetters, nDigits, nPunct);
    return 0;
}
