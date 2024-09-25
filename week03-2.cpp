#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;
int main(){
    printf("%d\n",'a');///單引號代表1個字母
    printf("%d\n","a");///雙引號代表很多個字母，就是陣列，就是指標

    if('a'==97) printf("其實'a'是數值 97\n");
}
