/*************************************************************************
	> File Name: ktlx30.c
	> Author: 
	> Mail: 
	> Created Time: 2017年09月16日 星期六 10时20分08秒
 ************************************************************************/

#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define __STDC_WANT_LIB_EXT1__ 1
#define TEXT_LEN 100
#define SUBSTR_LEN 40

int main(){
    char text[TEXT_LEN];
    char substring[SUBSTR_LEN];
    printf("Enter the string to be searched (less than %d characters):\n", TEXT_LEN);
    gets_s(text, TEXT_LEN);
    printf("\nEnter the string sought (less than %d characters):\n", SUBSTR_LEN);
    gets_s(substring, SUBSTR_LEN);
    printf("\nFirst string entered:\n%s\n", text);
    printf("Second string entered:\n%s\n", substring);
    for(int i = 0; (text[i] = (char)toupper(text[i])) != '\0'; ++i);
    for(int i = 0; (substring[i] = (char)toupper(substring[i])) != '\0'; ++i);
    printf("The second string %s found in the first.\n", ((strstr(text, substring) == NULL) ? "was not" : "was"));
    return 0;
}
