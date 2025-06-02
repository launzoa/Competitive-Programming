#include <stdlib.h>
#include <stdio.h>

const int n = 4;
int col[n];
int diag1[2 * n - 1];
int diag2[2 * n - 1];

void search(int y)
{
    if(y == n)
    {
        printf("Resultado obtido\n");
        return ;
    }

    for(int i = 0; i < n; i++)
    {
        if(col[i] || diag1[i+y] || diag2[n-1 + i - y]) continue;

        col[i] = 1; diag1[i+y] = 1; diag2[n-1 + i - y] = 1;
        search(y+1);

        col[i] = 0; diag1[i+y] = 0; diag2[n-1 + i - y] = 0;
    }

    return;
}

int main()
{
    for(int i = 0; i < 2 * n - 1; i++)
    {
        col[i] = 0;
        diag1[i] = 0;
        diag2[i] = 0;
    }

    search(0);

    return 0;
}