/*************************************************************************
	> File Name: ex14func.c
	> Author: 
	> Mail: 
	> Created Time: Sat 31 Mar 2018 04:09:45 PM CST
 ************************************************************************/

#include<stdio.h>
#include<ctype.h>

//forward declarations
int can_print_it(char ch);
void print_letters(char arg[]);

void print_arguments(int a, char *b[])
{
    int i;
    for(i = 0; a > i; i++ ){
        print_letters(b[i]);
    }
}

void print_letters(char c[])
{
    int i;
    for(i = 0; c[i] != '\0'; i++){
        char ch = c[i];
        if(can_print_it(ch)){
            printf("'%c'==>%d \t", ch, ch);
        }
    }
    printf("\n");
}

int can_print_it(char ch)
{
    return isalpha(ch);
}

int main(int a, char *b[])
{
    print_arguments(a, b);
    return 0;
}
