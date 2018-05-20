/*************************************************************************
	> File Name: ex9arr.c
	> Author: 
	> Mail: 
	> Created Time: Sat 17 Mar 2018 06:57:26 PM CST
 ************************************************************************/

#include<stdio.h>
int main(int a, char *b[])
{
    int num[3] = {1};
    char name[3] = {'L'};
    
    printf("initial int array is: %d, %d, %d\n",num[0], num[1], num[2]);
    printf("initial char array is: %c, %c, %c  \n", name[0], name[1], name[2]);

    num[1] = 2;
    num[2] = 3;

    name[1] = 'y';
    name[2] = 'u';

    printf("assignment int array is: %d, %d, %d\n",num[0], num[1], num[2]);
    printf("assignment char array is: %c, %c, %c  \n", name[0], name[1], name[2]);

    char *ant = "Lyu";

    printf("another name : %s\n", ant);
    printf("another char array is: %c, %c, %c, size is %d  \n", ant[0], ant[1], ant[2], sizeof(ant));


}
