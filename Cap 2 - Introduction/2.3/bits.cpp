#include <bits/stdc++.h>
using namespace std;


int main()
{
    setlocale(LC_ALL, "");
    int x = 22;
    int y = 25;
    cout << "x: " << x << " y: " << y;
    cout << "\nOperação and (&): " << (x & y);
    cout << "\nOperação or (|): " << (x | y);
    cout << "\nOperação xor (^): " << (x ^ y);
    cout << "\nOperação not (~) x: " << (~x) << " y: " << (~y);

    cout << "\nUsando and (&) para verificar pares e impares: \n";
    for(int i = 1; i <= 5; i++)
    {
        cout << i << ((i & 1) ? " é impar" : " é par") << "\n";
        
    }

    cout << "\nBits shift é a movimentação de bits, para a esquerda é o equivalente a dobrar 2^n e a direita a dividir 2^n: ";
    cout << "\nBit shift esquerda (<<) x: " << (x << 1) << " y: " << (y << 1);
    cout << "\nBit shift direita (>>) x: " << (x >> 1) << " y: " << (y >> 1);

    cout << "\n\nBits mask de (" << y << ")\nbase\tbinário\n";
    for(int i = 0; i <= 5; i++)
    {
        cout << pow(2, i) << "\t" << ((y & (1 << i)) ? " 1" : " 0") << "\n";
        
    }

    
    return 0;
}