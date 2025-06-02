#include <bits\stdc++.h>
using namespace std;

#define N 8

void algorithm_1(int arr[]);
void algorithm_2(int arr[]);
void algorithm_3(int arr[]);

int main()
{
    int arr[N] = {-1,2,4,-3,5,2,-5,2};

    algorithm_1(arr);
    cout << "\n";
    algorithm_2(arr);
    cout << "\n";
    algorithm_3(arr);

    return 0;
}

void algorithm_1(int arr[])
{
    int i, j, k, best = 0;
    cout << "Algorithm brute force for maximum subarray sum\n";
    cout << "Time complexity O(N^3)\n";

    for(i = 0; i < N; i++)
    {
        for(j = i; j < N; j++)
        {
            int sum = 0;
            for(k = i; k < j; k++)
            {   
                sum += arr[k];
            }
            best = max(best, sum);
        }  
    } 
    
    cout << "Result: " << best << "\n";

    return ;
}

void algorithm_2(int arr[])
{
    int i, j, best = 0;
    cout << "Algorithm brute force (but a little better) for maximum subarray sum\n";
    cout << "Time complexity O(N^2)\n";

    for(i = 0; i < N; i++)
    {
        int sum = 0;

        for(j = i; j < N; j++)
        {
            sum += arr[j];
            best = max(best, sum);
        }
    }

    cout << "Result: " << best << "\n";

    return ;
}

void algorithm_3(int arr[])
{
    int i, best = 0, sum = 0;

    cout << "Algorithm design (more efficient) for maximum subarray sum\n";
    cout << "Time complexity O(n)\n";

    for(i = 0; i < N; i++)
    {
        sum = max(arr[i], sum+arr[i]);
        best = max(best, sum);
    }

    cout << "Result: " << best << "\n";

    return ;
}
