
#include <stdio.h>

int mdc(int , int );

int main() {

    printf("%d\n", mdc(697, 1148));

    return 0;
}

int mdc(int n, int m) {
    if(m <= n && n % m == 0)
        return m;
    else if(n < m)
        return mdc(m, n);
    else
        return mdc(m, n % m);
}