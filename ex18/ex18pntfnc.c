/*************************************************************************
	> File Name: ex18pntfnc.c
	> Author: 
	> Mail: 
	> Created Time: Thu 12 Apr 2018 11:11:47 PM CST
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<errno.h>
#include<string.h>

/** die function from ex17*/
void die (const char * message)
{
    if(errno) {
        perror(message);
    } else {
        printf ("ERROR: %s \n", message);
    }
    exit(1);
}

/** a typedef creates a fake type, in this case for  a function pointer*/
typedef int (*compare_cb)(int a, int b);

/**
 *a classic bubblr sort function that use the compare_cb to do the sorting ;
 */
int *bubble_sort(int *number, int count, compare_cb cmp)
{
    int temp = 0;
    int i;
    int j;
    int *target = malloc(count * sizeof(int));

    if(!target) {
        die("memory error.");
    }

    memcpy(target, number, count * sizeof(int));

    for(i = 0; i < count; i++) {
        for(j = 0; j < count - 1; j++){
            if(cmp(target[j], target[j+1]) > 0) {
                temp = target[j+1];
                target[j+1] = target[j];
                target[j] = temp;
            }
        }
    }

    return target;
}

int sorted_order(int a, int b)
{
    return a - b;
}

int reverse_order(int a, int b)
{
    return b - a;
}

int strange_order(int a, int b)
{
    if(a == 0 || b == 0) {
        return 0;
    } else {
        return a % b;
    }
}

/**
 *used to test that we are sorting things correctly
 *by doing the sort and printf it our;
 */
void test_sorting(int *number, int count, compare_cb cmp)
{
    int i;
    int *sorted = bubble_sort(number, count, cmp);

    if(!sorted) {
        die("Failed to sort as requested.");
    }
    for(i = 0; i < count; i++) {
        printf("%d ", sorted[i]);
    }
    printf(
        "\n"
        );

    free(sorted);
}

int main(int argc, char *argv[])
{
    if(argc < 2) {
        die("USAGE: ex18pntfnc 1 3 ...");

    }
    int count = argc - 1;
    int i;
    char **inputs = argv + 1;

    int *number = malloc(count * sizeof(int));
    if(!number) {
        die("memory error");
    }

    for(i = 0; i < count; i++) {
        number[i] = atoi(inputs[i]);
    }

    test_sorting(number, count, sorted_order);
    test_sorting(number, count, reverse_order);
    test_sorting(number, count, strange_order);

    free(number);
    return 0;
}

