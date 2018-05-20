/*************************************************************************
	> File Name: ex15ptr.c
	> Author: 
	> Mail: 
	> Created Time: Tue 03 Apr 2018 11:33:06 PM CST
 ************************************************************************/

#include<stdio.h>
int main(int a, char *b[])
{
    int age[] = {18, 25, 30, 50, 17};
    char *names[] = {
        "Lyndon", "Lisa",
        "zoey", "shuang", "feng"
    };

    // safely get the size of age
    int count = sizeof(age) / sizeof(int);
    int i;

    for(i = 0; i < count; i++){
        printf("1 The %s is %d yrs old! 1\n", 
               names[i], age[i]);
    }

    printf("\n~~~~~~~~~~^^^^^^^^^^~~~~~~~~\n");

    int *cur_age = age;
    char **cur_name = names;
    //second way using pointer;

    for(i=0; i < count; i++){
        printf("2The %s is %d yrs old 2\n",
              *(cur_name+i), *(cur_age+i));
    }

    printf("\n~~~~~~~~~~^^^^^^^^^^~~~~~~~~\n");

    //Third way, pointers are just arrays
    for(i=0; i < count; i++){
        printf("3The %s is %d yrs old 3\n",
              cur_name[i], cur_age[i]);
    }

    printf("\n~~~~~~~~~~^^^^^^^^^^~~~~~~~~\n");

    //fourth way with pointers in a stupid complex way
    for(cur_name = names, cur_age = age;
       (cur_age - age) < count;
        cur_name++, cur_age++){
            printf("4The %s lived %d yrs old. 4\n",
                  *cur_name, *cur_age);
        }

    printf("\n~~~~~~~~~~^^^^^^^^^^~~~~~~~~\n");
    return 0;
}
