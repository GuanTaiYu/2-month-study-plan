/*************************************************************************
	> File Name: ktlx24.c
	> Author: 
	> Mail: 
	> Created Time: 2017年09月16日 星期六 08时52分19秒
 ************************************************************************/

#include<stdio.h>
#include<string.h>
#define __STDC_WANT_LIB_EXT1__ 1

int main(){
    char preamble[] = "The joke is: \n\n";
    char str[][40] = {
        "My dog hasn\'t got any nose.\n",
        "How does your dog smell then?\n",
        "My dog smells horrible.\n"
    };
    unsigned int strCount = sizeof(str) / sizeof(str[0]);
    unsigned int length = 0;
    for(unsigned int i = 0; i < strCount; ++i){
        length += strlen_s(str[i], sizeof(str[i]));
    }
    char joke[length + strnlen_s(preamble, sizeof(preamble)) + 1];
    if(srtncpy_s(joke, sizeof(joke), preamble, sizeof(preamble))){
        printf("Error copying preamble to joke.\n");
        return 1;
    }
    for(unsigned int i = 0; i < strCount; ++i){
        if(strncat_s(joke, sizeof(joke), str[i], sizeof(str[i]))){
            printf("Error copying string str[%u].", i);
            return 2;
        }
    }
    printf("%s", joke);
    return 0;
}

