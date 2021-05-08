#include <iostream>
#include <cstdio>

template <typename T>
T step_fn(const T& arg)
{
    T result = 0;
    if(arg < 0) 
        result = -1;
    else if(arg > 0)
        result = 1;
    return result;
}

int main()
{
    auto x = 3.25;
    std::cout << step_fn(x);
}