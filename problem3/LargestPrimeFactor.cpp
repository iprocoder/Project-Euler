#include <iostream>
#include <algorithm>
using namespace std;

const int MAX = 20;

bool isPrime(int num)
{
    for (int i = 2; i < num / 2 + 1; ++i)
        if (num / i == 0)
            return false;
    return true;
}

int main()
{
    int matrix[MAX][MAX] = {0};
    int prime[MAX];
    for (int i = 0, j = 2; j <= MAX; ++j)
        if (isPrime(j))
            prime[i++] = j;
    for (int i = 2, j = 0; i <= 20; ++i) {
        if (i / prime[j] == 0) {
            matrix[i - 1][j]++;
            i--;
        }
    }
    cout << max(matrix[1]);
}


