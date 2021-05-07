#include <iostream>

bool odd(const int& n)
{
    return n & 0x1;
}

int half(const int& n)
{
    return n >> 0x1;
}

// template <typename T, typename U>
// void prnt(const T& arg1, const U& arg2)
// {
//     std::cout << arg1 << std::endl;
//     std::cout << arg2 << std::endl;
// }

template <typename T>
class Fn
{
private:
    T m_arg1;    
public:
    Fn(T arg1) : m_arg1{arg1} {}
    T getValue() { return m_arg1; }
    T setValue(const T& tmp) { return m_arg1 = tmp; }
};

int main()
{
    Fn<char> o1{'W'};
    std::cout << o1.getValue() << std::endl;
    o1.setValue('L');
    std::cout << o1.getValue() << std::endl;

    return 0;
}