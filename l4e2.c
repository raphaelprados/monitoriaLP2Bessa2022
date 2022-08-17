
#include <stdio.h>

float potencia(float , int );

int main(int argc, char const *argv[])
{

    printf("%.2f\n", potencia(3.5, 2));

    return 0;
}

float potencia(float x, int n) {
    if(n > 1)
        return x * potencia(x, n - 1);
    else
        return x;
}
