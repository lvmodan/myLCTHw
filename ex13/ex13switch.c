/*************************************************************************
	> File Name: ex13switch.c
	> Author: 
	> Mail: 
	> Created Time: Mon 19 Mar 2018 11:07:55 PM CST
 ************************************************************************/

#include<stdio.h>
int main(int a, char *b[])
{
    if (a != 2){
        printf("You need 1 argument.");
        //abort a program
        return 1;
    }

    int i = 0;
    for(i = 0; b[1][i] != '\0'; i++){
        char letter = b[1][i];

        switch(letter) {
            case 'a':
            case 'A':
            printf("the number %d letter %c is: 'A'\n", i, letter);
            break;
            case 'e':
            case 'E':
            printf("the number %d letter %c is： ‘E'\n", i, letter);
            break;
            case 'i':
            case 'I':
            printf("the number %d letter %c is: 'I'\n", i, letter);
            break;
            case 'o':
            case 'O':
            printf("the number %d letter %c is: 'O'\n", i, letter);
            break;
            case 'u':
            case 'U':
            printf("The number %d letter %c is: 'U'\n", i, letter);
            break;
            case 'y':
            case 'Y':
            if(i > 2){
            printf("The number %d letter %c is: 'Y'\n", i, letter);
            }else{
                printf("the number %d letter %c is not a vowel\n", i, letter);}
            break;
            default:
            printf("the number %d letter %c is not a vowel\n", i, letter);
        }
    }
    return 0;
}
