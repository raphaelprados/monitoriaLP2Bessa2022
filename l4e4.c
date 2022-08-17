
#include <stdio.h>

int a(int [], size_t , size_t , int );

int main(int argc, char const *argv[])
{
    
    int v[] = {1, 2, 3, 4, 25, 6, 7, 8, 9};


    /* sizeof(v) / sizeof(int): retorna quantos items o vetor possui 
        Não é possivel obter esse valor quando o vetor é passado como 
        argumento para a função, por isso que ele é passado aqui
    */
    /* O valor max_atual é passado como zero para simplificar o exercicio,
        mas existe uma biblioteca chamada limits.h, lá é possível obter
        o menor valor possível para um inteiro. Ficaria algo como:
        a(v, 0, INT_MIN, 0) */
    printf("%d\n", a(v, 0, sizeof(v)/sizeof(int), 0));
    

    return 0;
}

int a(int v[], size_t pos, size_t tam, int max_atual) {
    if(pos != tam) {
        if(v[pos] > max_atual)
            a(v, ++pos, tam, v[pos]);
        else
            a(v, ++pos, tam, max_atual);
    }
    else 
        return max_atual;
}
