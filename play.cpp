#include <iostream>

bool odd(const int& n)
{
    return n & 0x1;
}

int half(const int& n)
{
    return n >> 0x1;
}

template <typename T, typename U>
void prnt(const T& arg1, const U& arg2)
{
    std::cout << arg1 << std::endl;
    std::cout << arg2 << std::endl;
}

int main()
{
    int x = 123;
    double d = 456.789;
    prnt<int, double> (x, d);
    return 0;
}