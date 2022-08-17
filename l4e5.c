
#include <stdio.h>

int buscaBinaria(int [], int , size_t , size_t );

int main(int argc, char const *argv[])
{

    int v[] = {1, 2, 3, 4, 25, 6, 7, 8, 9};

    printf("%d\n", buscaBinaria(v, 25, 0, sizeof(v)/sizeof(int) - 1));

    return 0;
}

int buscaBinaria(int v[], int valor, size_t l, size_t h) {
    int m = (l + h) / 2;

    if(l > h)
        return -1;
    else {
        if(valor == v[m])
            return m;
        else if(valor > v[m])
            return buscaBinaria(v, valor, m + 1, h);
        else
            return buscaBinaria(v, valor, l, m - 1);
    }
}
