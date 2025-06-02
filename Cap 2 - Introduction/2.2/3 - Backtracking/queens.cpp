#include <bits/stdc++.h>
using namespace std;

const int N = 4; 
int cont = 0;
vector<int> col(N, 0);
vector<int> diag1(2*N-1, 0);
vector<int> diag2(2*N-1, 0); 


void search(int n);

int main() {

    search(0);

    cout << "Número de soluções para " << N << " rainhas: " << cont;

    return 0;
}

void search(int n) 
{
    if(n == N) 
    {
        cont++;
        return;
    }
    
    for(int i = 0; i < N; i++) 
    {
        if(col[i] || diag1[i - n + N - 1] || diag2[i + n]) continue;
        
        col[i] = diag1[i - n + N - 1] = diag2[i + n] = 1;
        
        search(n + 1);
        
        col[i] = diag1[i - n + N - 1] = diag2[i + n] = 0;
    }
}