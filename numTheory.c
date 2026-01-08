#include <stdio.h>
#include "mathUtils.h"


int gcd(int num1, int num2)
{
    int remainder;
    
    while (num2 != 0) {
        remainder = num1 % num2;
        num1 = num2;
        num2 = remainder;
    
    }
            
    return num1;
}

/*Least Common Multiple*/
long long lcm(int num1, int num2)
{
    
    long long result;
    
    if (num1 == 0 || num2 == 0) {
        result = 0;
    }
    else {
        result = num1 * num2 / gcd(num1, num2);
    }

    return result;

}

int menuSelection(void)
{
    int sel;

    printf("Number Theory Algorithms\n"
        "--------------------------------\n"
        "1. Greatest Common Divisor (GCD)\n"
        "2. Least Common Multiple (LCM)\n"
        "0. Exit\n"
        "--------------------------------\n"
        "Your selection: ");
    scanf("%d", &sel);

    return sel;
    
}

int getNumber(void)
{
    int num;
    int valid;

    do {
        printf("Enter a number: ");
        valid = scanf("%d", &num);

        if (valid != 1) {
            printf("Invalid value! Please enter an integer.\n");

            // clear input buffer
            while (getchar() != '\n');
        }
    } while(!valid);

return num;
}

int absNum(int num)
{
    if (num < 0) {
        num = -num;
    }

    return num;
}