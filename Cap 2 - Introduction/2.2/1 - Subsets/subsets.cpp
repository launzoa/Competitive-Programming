#include <bits\stdc++.h>
using namespace std;

vector <vector<int>> v; // Vetor global para armazenar todos os subconjuntos 
vector <int> s; // Vetor global temporário para construir o subconjunto

void search(int k, int n);

int main()
{
    int n;
    cout << "Number of subsets: ";
    cin >> n;   

    vector<int> cont(n+1);

    search(1, n);
    
    for(int i = 0; i < v.size(); i++)
    {
        cout << "{ ";
        for(int j : v[i])
        {
            cout << j << " ";
        }
        cout << "}\n";
        cont[v[i].size()]++;

    }

    cout << "Quantidade de aparições para cada quantidade de elementos no subconjunto: \n";
    for(int i = 0; i <= n; i++)
    {
        cout << i << ": " << cont[i] << "\n"; 
    }

    return 0;
}   

void search(int k, int n)
{
    if(k+1 == n)
    {
        s.push_back(k);
        s.push_back(k+1);
        v.push_back(s); // {k, k+1}

        s.pop_back();
        v.push_back(s); // {k}

        s.pop_back();
        s.push_back(k+1);
        v.push_back(s); // {k+1}

        s.pop_back();
        v.push_back(s); // {}
    }
    else
    {
        s.push_back(k); // Inclui elemento atual e continua
        search(k+1, n);
        
        s.pop_back(); // Exclui elemento atual e continua
        search(k+1, n);
    }
}