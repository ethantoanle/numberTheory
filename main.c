#include <stdio.h>
#include "mathUtils.h"

int main(void)
{
    int opt;
    int num1, num2;
    long long res;

    opt = menuSelection();
    while (opt != 0) {
        if (opt == 1){
            num1 = getNumber();
            num2 = getNumber();
            res = gcd(absNum(num1), absNum(num2));
            printf("GCD(%d, %d) = %lld\n\n", num1, num2, res);
        }
        else if (opt == 2){
            num1 = getNumber();
            num2 = getNumber();
            res = lcm(absNum(num1), absNum(num2));
            printf("LCM(%d, %d) = %lld\n\n", num1, num2, res);
        }
        else {
            printf("Error: Invalid value. Your selection should be between 0-2 inclusive!\n");
        }
        opt = menuSelection();
    }


    return 0;
}