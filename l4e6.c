
#include <stdio.h>

int recFib(int , int , int );
int recFibRuim(int );
int itFib(int );

int main(int argc, char const *argv[])
{

    int x = 10;

    printf(" -> %d\n", itFib(x));
    printf(" -> %d\n", recFib(0, 1, x));
    printf(" -> %d\n", recFibRuim(x));

    return 0;
}

int itFib(int n) {
    int x1 = 0, x2 = 1, temp;

    while(n - 1 > 0) {
        printf("i, ");
        temp = x1 + x2;
        x1 = x2;
        x2 = temp;
        n--;
    }

    return x2;

}

int recFib(int x1, int x2, int n) {
    if(n > 0) {
        printf("r, ");
        return recFib(x2, x1 + x2, --n);
    } 
}

int recFibRuim(int n) {
    if(n <= 1)
        return n;
    printf("p, ");
    return recFibRuim(n - 1) + recFibRuim(n - 2);
}
