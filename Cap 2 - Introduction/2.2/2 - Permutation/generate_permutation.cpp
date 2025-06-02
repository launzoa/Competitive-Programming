#include <bits/stdc++.h>
using namespace std;

vector<vector <int>> v;
vector<int> s;
vector<bool> chosen;

void search(int n);

int main()
{
    int n;
    cout << "Entre com o número de permutações: ";
    cin >> n;

    chosen.resize(n+1, false);  
    search(n);

    for(int i = 0; i < v.size(); i++)
    {
        cout << "{ ";
        for(int j : v[i])
        {
            cout << j << " ";
        }
        cout << "}\n";
    }

    return 0;
}


void search(int n)
{
    if(s.size() == n)
    {

        v.push_back(s);
    }
    else
    {
        for(int i = 1; i <= n; i++)
        {
            if(chosen[i]) continue;
            
            chosen[i] = true;
            s.push_back(i);
            search(n);

            chosen[i] = false;
            s.pop_back();
        }
    }
}