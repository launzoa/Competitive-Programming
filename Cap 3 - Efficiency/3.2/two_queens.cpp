#include <bits\stdc++.h>
using namespace std;

#define N 3

void algorithm_1();


int main()
{
    

    algorithm_1();
    cout << "\n";

    return 0;
}

/*
Is this first algorithm is an example of a brute force algorithm
The algorithm's idea is to use four nested loops. These loops are used, first, to mark a position on the chessboard for the
initial queen. Following that, the algorithm traverses all remaining positions on the board, verifying if each one is a valid position.
*/
void algorithm_1()
{
    int i, j, k, l, count = 0, line_1, col_1, diag1_1, diag2_1, count_2, line_2, col_2, diag1_2, diag2_2;
    cout << "Algorithm brute force for two queens in " << N << "x" << N << " chessboard\n";
    cout << "Time complexity O(N^4)\n";

    for(i = 0; i < N; i++)
    {
        for(j = 0; j < N; j++)
        {
            line_1 = i;
            col_1 = j;
            diag1_1 = i+j;
            diag2_1 = N-1 + col_1 - line_1;
            for(k = 0; k < N; k++)
            {
                for(l = 0; l < N; l++)
                {
                    if (i == k && j == l) continue; 
                    line_2 = k;
                    col_2 = l;
                    diag1_2 = k+l;
                    diag2_2 = N-1 + col_2 - line_2;
                    if(line_1 != line_2 && col_1 != col_2 && diag1_1 != diag1_2 && diag2_1 != diag2_2) count++;
                }
            }
        }
    }

    
    cout << "Result: " << count/2 << "\n";

    return ;
}


