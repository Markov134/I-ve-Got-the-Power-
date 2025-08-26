//
// Created by Steph on 8/26/2025.
//

#include "PowerOf.h"

bool EvenNumberChecker(int n) {
    if (n % 2 == 0)
        return true;
    else
        return false;
}

int naivePower(int x, int n) {
    if (x == 0)
        return 0;

    if (n == 0)
        return 1;

    return x * naivePower(x, n - 1);
}

int unoptimizedDCPower(int x, int n) {
    if (x == 0)
        return 0;

    if (n == 0)
        return 1;

    if (EvenNumberChecker(n))
        return unoptimizedDCPower(x, n / 2) * unoptimizedDCPower(x, n / 2);
    else
        return x * unoptimizedDCPower(x, n / 2) * unoptimizedDCPower(x, n / 2);

}

int optimizedDCPower(int x, int n) {
    if (x == 0)
        return 0;

    if (n == 0)
        return 1;

    int temp = optimizedDCPower(x, n / 2);

    if (EvenNumberChecker(n))
        return temp * temp;
    else
        return x * temp * temp;
}