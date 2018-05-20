/*************************************************************************
	> File Name: ex12if.c
	> Author: 
	> Mail: 
	> Created Time: Mon 19 Mar 2018 10:45:48 PM CST
 ************************************************************************/

#include<stdio.h>

int main(int a, char *b[])
{
    int i = 0;

    if(a == 1){
        printf("You only have one argument, not good...");
    }else if(a > 1 && a < 5){
        printf("Here you go, your argument as following:");
        for(i = 0; i < a; i++){
            printf(" the %d of %d arguments is: %s\n",i, a, b[i]);
        }
    }else{
        printf("Whops. You put too much arguments in it. Bye");
    }

    return 0;
}
