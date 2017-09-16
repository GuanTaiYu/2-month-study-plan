/*************************************************************************
	> File Name: ktlx25.c
	> Author: 
	> Mail: 
	> Created Time: 2017年09月16日 星期六 09时10分56秒
 ************************************************************************/

#include<stdio.h>
#include<string.h>
#define __STDC_WANT_LIB_EXT1__ 1

int main(){
    char word1[MAX_LENGTH];
    char word2[MAX_LENGTH];
    printf("Type int the first word (maximum %d charaters): ", MAX_LENGTH - 1);
    int retval = scanf_s("%s", word1, sizeof(word1));
    if(EOF == retval){
        printf("Error reading the word.\n");
        return 1;
    }
    printf("Type int the second word (maximum %d charaters): ", MAX_LENGTH -1);
    retval = scanf_s("%s", word2, sizeof(word2));
    if(EOF == retval){
        printf("Error reading the word.\n");
        return 2;
    }
    if(strcmp(word1, word2) == 0){
        printf("You have entered identical words");
    }
    else{
        printf("%s precedes %s\n", (strcmp(word1, word2) < 0) ? word1 : word2, (strcmp(word1, word2) < 0) ? word2 : word1);
    }
    return 0;
}
