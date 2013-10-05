#include <iostream>

const int MAX = 4000000;

int main()
{
    long sum = 0;
    int i = 1, j = 2;
    while (j <= MAX) {
        if (j % 2 == 0)
            sum += j;
        int tmp = i;
        i = j;
        j = tmp + j;
    }
    std::cout << sum;
    return 0;
}
