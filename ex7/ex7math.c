/*************************************************************************
	> File Name: ex7math.c
	> Author: 
	> Mail: 
	> Created Time: Sat 17 Mar 2018 05:46:26 PM CST
 ************************************************************************/

#include<stdio.h>
int main(int a, char *b[])
{
    int bug = 100;
    double bug_rate = 1.2;
    long defect_in_universe = 1L * 1024L * 1024L * 1024L;
    char nul1 = '\0';

    printf("There is %d bugs.\n", bug);
    printf("According bug rate %f, expect that you will have %f bugs.\n", bug_rate, bug * bug_rate);
    printf("Compare to the universe bugs: %ld, you contribute a little bugs: %e\n", defect_in_universe,  bug * bug_rate / defect_in_universe);
    printf("That means you almost free from bugs, you need concern: %d%%\n", bug * nul1);
}
