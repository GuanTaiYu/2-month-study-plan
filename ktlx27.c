/*************************************************************************
	> File Name: ktlx27.c
	> Author: 
	> Mail: 
	> Created Time: 2017年09月16日 星期六 09时40分35秒
 ************************************************************************/

#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#define __STDC_WANT_LIb_EXT1__ 1

int main(){
    char delimiters[] = " \".,;:!?) (";
    char buf[100];
    char str[1000];
    char *ptr = NULL;
    str[0] = '\0';
    size_t str_len = sizeof(str);
    size_t buf_len = sizeof(buf);
    printf("Enter some prose that is less than %zd characters.\n Terminate input by entering an empty line:\n", str_len);
    while(true){
        if(!gets_s(buf, buf_len)){
            printf("Error reading string.\n");
            return 1;
        }
        if(!strnlen_s(buf, buf_len)){
            break;
        }
        if(strcat_s(str, str_len, buf)){
            printf("Maximum permitted input length exceeded.\n");
            return 1;
        }
    }
    printf("The words in the prose that you entered are:\n", str);
    unsigned int word_count = 0;
    char *pWord = strtok_s(str, &str_len, delimiters, &ptr);
    if(pWord){
        do{
            printf("%s-18s", pWord);
            if(++word_count % 5 == 0){
                printf("\n");
            }
            pWord = strtok_s(NULL, &str_len, delimiters, &ptr);
        }while(pWord);
        printf("\n%u words found.\n", word_count);
    }
    else{
        printf("No ords found.\n");
    }
    return 0;
}
