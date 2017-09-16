/*************************************************************************
	> File Name: ktlx18.c
	> Author: 
	> Mail: 
	> Created Time: 2017年09月02日 星期六 10时18分37秒
 ************************************************************************/

#include<stdio.h>
#include<stdbool.h>

int main(){
    char size[3][12] = {
        {'6','6','6','6','7','7','7','7','7','7','7','7'},
        {'1','5','3','7',' ','1','1','3','1','5','3','7'},
        {'2','8','4','8',' ','8','4','8','2','8','4','8'}
    } ;
    int headsize[12] = {164,166,169,172,175,178,181,184,188,191,194,197};
    float cranium = 0.0f;
    int your_head = 0;
    bool hat_found = false;
    printf("Enter the circumference of your head above your eyebrows in inches as a decimal value:");
    scanf(" %f", &cranium);
    your_head = (int)(8.0f*cranium);
    size_t i = 0;
    if(your_head == headsize[i]){
        hat_found = true;
        else{
            for(i = 1; i < sizeof(headsize); ++i){
                if(your_head > headsize[i - 1] && your_head <= headsize[i]){
                    hat_found = true;
                    break;
                }
            }
        }
        if(hat_found){
            printf("Your hat size is %c %c%c%c\n", size[0][i], size[1][i], (size[1][i] == ' ') ? ' ' : '/', size[2][i]);
        }
        else{
            if(your_head < headsize[0]){
                printf("You are the proverbial pinhead. No hat for you I'm afraid.\n");
            }
            else{
                printf("You, in technical parlance, are a fathead. No hat for you, I'm afraid.\n");
            }
        }
    }
    return 0;
}
