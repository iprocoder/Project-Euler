#include <iostream>
using namespace std;

const int NUM = 10000;

bool isPrime(int n)
{
    for (int i = 2; i <= n / 2 + 1; ++i)
        if (n % i == 0)
            return false;
    return true;
}

int main()
{
    int i = 0;
    int j = 2;
    while (true) {
        if (isPrime(j))
            ++i;
        if (i == NUM)
            break;
        ++j;
    }
    cout << j;
    return 0;
}
