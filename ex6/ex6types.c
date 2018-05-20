/*************************************************************************
	> File Name: ex6types.c
	> Author: 
	> Mail: 
	> Created Time: Sat 17 Mar 2018 05:17:48 PM CST
 ************************************************************************/

#include<stdio.h>

int main(int argc, char *argv[])
{
    int distance = 1000;
    float floattype = 3.14157890123456789;
    double doubletype = 2.17287890123456789;
    char first_name[] = "lyndon";
    char last_name[] = "Lyu";
    char onechar = '.';

    printf("how long the distance is? answer: %d miles\n", distance);
    printf("a float type number: %f \n", floattype);
    printf("a double type number: %f \n", doubletype);
    printf("There is a man, named: %s%s%c\n", first_name, onechar, last_name);

    return 0;
}
