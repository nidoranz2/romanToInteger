#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
//Creating a function named value that accepts a Roman Numeral Character and returns the equivalent value of the Roman Numeral
//ローマ数字に対応している数字を返すユーザー定義関数
int value(char c)
{
    switch(c){
        case 'I':
        return 1;
        case 'V':
        return 5;
        case 'X':
        return 10;
        case 'L':
        return 50;
        case 'C':
        return 100;
        case 'D':
        return 500;
        case 'M':
        return 1000;
        default:
        return 0;
    }
}
//function that calculates the value of the Roman Numeral according to its arrangement
int romanToInt(char * s){
    int total = 0;
    for(int i = 0; i < strlen(s) ; i++){
        if(value(s[i]) < value(s[i+1]))
        {
            total -= value(s[i]);
        }
        else
        {
            total += value(s[i]);
        }
    }
    return total;
}
int main(int argc, char *argv[])
{
    //ends the program if the program is initiated incorrectly
    if(argc > 2 && !isdigit(*argv[1]))
    {
        printf("Too much arguments. Correct usage: ./romantoint [Roman Numeral]");
        return 0;
    }
    else
    {
        printf("%d",romanToInt(argv[1]));
    }
}
