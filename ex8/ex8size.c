/*************************************************************************
	> File Name: ex8size.c
	> Author: 
	> Mail: 
	> Created Time: Sat 17 Mar 2018 06:09:55 PM CST
 ************************************************************************/

#include<stdio.h>
int main(int a, char *b[])
{
    int area[] = {1,2,3,4,5};
    char name[] = {'L',
                  'y',
                  'n',
                  'd',
                  'o',
                  'n'};
    char full_name[] = "Lyndon.Lyu";

    printf("I am using sizeof to probe an area size, here we go!\n");
    printf("Baseline: the size of int is %ld, the size of char is %ld\n", sizeof(int), sizeof(char));
    printf("records in area:%ld, records in Name: %ld, records in full_name: %ld\n", sizeof(area)/sizeof(int), sizeof(name)/sizeof(char), sizeof(full_name)/sizeof(char));
    printf("name is \"%s\" and full_name is \"%s\"\n", name, full_name);
    printf("the last record in full_name is : \"%c\"\n", full_name[sizeof(full_name)]);

    return 0;
}
