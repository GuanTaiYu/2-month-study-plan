/*************************************************************************
	> File Name: ktlx26.c
	> Author: 
	> Mail: 
	> Created Time: 2017年09月16日 星期六 09时28分28秒
 ************************************************************************/

#include<stdio.h>
#include<string.h>

int main(){
    char str1[] = "This string contains the holy grail.";
    char str2[] = "the holy grail";
    char str3[] = "the holy grill";
    if(strstr(str1, str2)){
        printf("\"%s\" was found in \"%s\"\n", str2, str1);
    }
    else{
        printf("\n\"%s\" was not found.", str2);
    }
    if(!strstr(str1, str3)){
        printf("\"%s\" was not found.", str3);
    }
    else{
        printf("\nWe shouldn't get to here!");
    }
    return 0;
}
