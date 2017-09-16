/*************************************************************************
	> File Name: ktlx31.c
	> Author: 
	> Mail: 
	> Created Time: 2017年09月16日 星期六 10时38分02秒
 ************************************************************************/

#include<stdio.h>
#include<string.h>
#include<stdbool.h>

#define TEXT_LEN 10000
#define BUF_SIZE 100
#define MAX_WORDS 500
#define WORD_LEN 12

int main(){
    char delimiters[] = " \n\".,;:!?) (";
    char text[TEXT_LEN] = "";
    char buf[BUF_SIZE];
    char words[MAX_WORDS][WORD_LEN];
    int nword[MAX_WORDS] = {0};
    int word_count = 0;
    printf("Enter text on an arbitrary number of lines.");
    printf("\nEnter an empty lin to end input:\n");
    while(true){
        fgets(buf, BUF_SIZE, stdin);
        if(buf[0] == '\n'){
            break;
        }
        if(strcat_s(text, TEXT_LEN, buf)){
            printf("Maximum capacity for text exceeded. Terminating program.\n");
            return 1;
        }
    }
    size_t len = TEXT_LEN;
    char *ptr = NULL;
    char *pWord = strtok_s(text, &len, delimiters, &ptr);
    if(!pWord){
        printf("No words found. Ending program.\n");
        return 1;
    }
    strcpy_s(words[word_count], WORD_LEN, pWord);
    ++nword[word_count++];
    bool new_word = true;
    while(true){
        pWord = strtok_s(NULL, &len, delimiters, &ptr);
        if(!pWord){
            break;
        }
        for(int i = 0; i < word_count; ++i){
            if(strcmp(words[i], pWord) == 0){
                ++nword[i];
                new_word = false;
            }
        }
        if(new_word){
            strcpy_s(words[word_count], WORD_LEN, pWord);
            ++nword[word_count++];
        }
        else{
            new_word = true;
        }
        if(word_count > MAX_WORDS - 1){
            printf("Capacity to store words exeeded.\n");
            return 1;
        }
    }
    for(int i = 0; i < word_count; ++i){
        printf(" %-13s %3d", words[i], nword[i]);
        if((i + 1) % 4 == 0){
            printf("\n");
        }
    } 
    printf("\n");
    return 0;
}
