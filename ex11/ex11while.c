/*************************************************************************
	> File Name: ex11while.c
	> Author: 
	> Mail: 
	> Created Time: Mon 19 Mar 2018 10:33:11 PM CST
 ************************************************************************/

#include<stdio.h>

int main(int a, char *b[])
{
    int i = 0;
    while(i < a){
        printf("a %d is %s\n", i, b[i]);
        i++;
    }

    //make an array of strings
    char *states[] = {
        "California", "Oregon",
        "Los Angel", "New York"
    };

    i = 0;
    int state_num = 4;
    while(i < state_num){
        printf("the %d of %d states is: %s  \n", i, state_num, states[i]);
        i++;
    }

    return 0;
}
