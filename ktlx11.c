/*************************************************************************
	> File Name: ktlx11.c
	> Author: 
	> Mail: 
	> Created Time: 2017年08月31日 星期四 08时35分55秒
 ************************************************************************/

#include<stdio.h>

int f(int n){
    if(n == 1){
        return 1;
    }
    return f(n - 1) * n;
}

int main(){
    int n;
    scanf("%d" , &n);
    printf("%d! = %d\n" , n , f(n));
    return 0;
}

/*void f(int n , int *ans){
    if(n == 1){
        *ans = 1;
        return;
    }
    int temp_ans;
    f(n - 1 , temp_ans);
    *ans = temp_ans * n;
}

int main(){
    int n , ans;
    scanf("%d" , &n);
    f(n , &ans);
    printf("%d! = %d\n" , n , ans);
    return 0;
}*/

//头递归
/*int f(int n){
    if(n == 1){
        return 1;
    }
    return f(n - 1) * n;
}

int main(){
    int n , ans;
    scanf("%d" , &n);
    f(n , &ans);
    printf("%d! = %d\n" , n , ans);
    return 0;
}*/

//尾递归
/*int f(int n , int p){
    if(n == 1){
        return p;
    }
    return f(n - 1 , p * n);
}

int main(){
    int n , ans;
    scanf("%d" , &n);
    ans = f(n , 1);
    printf("%d! = %d\n" , n , ans);
    return 0;
}*/




