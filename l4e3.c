
#include <stdio.h>

int digitos(int );

int main(int argc, char const *argv[])
{
    
    printf("%d\n", digitos(1));

    return 0;
}

int digitos(int n) {
    if(n > 9)
        return 1 + digitos(n /= 10);
    else
        return 1;
}
