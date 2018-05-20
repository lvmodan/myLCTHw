/*************************************************************************
	> File Name: ex10for.c
	> Author: 
	> Mail: 
	> Created Time: Sat 17 Mar 2018 07:37:08 PM CST
 ************************************************************************/

#include<stdio.h>
int main(int a, char *b[])
{
    int i = 0;

    for(i=0; i < a; i++){
        printf("the argument in main method contains: %d: %s\n", i, b[i]);
    }

    char *state[] = {
        "Califonia", "Oregon",
        "New York", "Los Angel"
    };

    for(i=0; i < 4; i++ ){
        printf("I traveled these %ld states: %s\n", sizeof(state)/sizeof(char), state[i]);
    }
}
