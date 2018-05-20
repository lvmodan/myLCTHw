/*************************************************************************
	> File Name: ex16struct.c
	> Author: 
	> Mail: 
	> Created Time: Thu 05 Apr 2018 10:38:27 AM CST
 ************************************************************************/

#include<stdio.h>
#include<assert.h>
#include<stdlib.h>
#include<string.h>

struct Person {
    char * name;
    int age;
    int height;
    int weight;
};

struct Person * Person_creat(char * name, int age, int height, int weight)
{
    struct Person * who = malloc(sizeof(struct Person));
    assert(who != NULL);

    who -> name = strdup(name);
    who -> age = age;
    who -> height = height;
    who -> weight = weight;

    return who;
}

void Person_destroy(struct Person * who)
{
    assert(who != NULL);

    free(who -> name);
    free(who);
}

void Person_print(struct Person * who)
{
    printf("Name is %s \n", who -> name);
    printf("\tage is %d \n", who -> age);
    printf("\theight is %d \n", who -> height);
    printf("\tweight is %d \n", who -> weight);
}

int main(int argc, char * argv[])
{
    //make two people structures
    struct Person * Lyndon = Person_creat("Lyndon",
                                          24, 66, 170);
    struct Person * shuang = Person_creat("Shuang",
                                          24, 60, 160);

    //print them out, where they are in computer memory.
    printf("Lyndon is at memory location: %p \n", Lyndon);
    Person_print(Lyndon);

    printf("shuang is at memory location: %p \n", shuang);
    Person_print(shuang);

    //get old
    Lyndon -> age += 1;
    Person_print(Lyndon);
    shuang -> age += 1;
    Person_print(shuang);

    //go to heaven
    Person_destroy(Lyndon);
    Person_destroy(shuang);

    return 0;
    
}
