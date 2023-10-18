#include <stdio.h>

long getnumbers(int n){ //função recursiva
    long int cat = 0;
    if(n == 0) return 1;
    else{ //senão
       cat = ((4*n - 2)*getnumbers(n-1))/(n+1);
       return cat;
    }
}

int main()
{
    int n; //valor sendo lido

    scanf("%d", &n);
    printf("%ld", getnumbers(n));

    return 0;
}


