
#include <stdio.h>

int gfib(int , int , int );

int main() {

    int x = 5;

    printf("%d\n", gfib(0, 1, x));
    printf("%d\n", itgfib(0, 1, x));

    return 0;
}

// Versão recursiva
int gfib(int f0, int f1, int n) {
    if(n > 1)
        return gfib(f0, f1, n-1) + gfib(f0, f1, n - 2);
    else if(n == 1)
        return f1;
    return f0;
}

// Versão iterativa
int itgfib(int f0, int f1, int n) {
    int fib;
    while(n > 1) {
        fib = f0 + f1;
        f0 = f1;
        f1 = fib;
        n--;
    }
    return fib;
}
