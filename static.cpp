#include <iostream>
class Fn
{
public:
    static void prnt();
};

void Fn::prnt()
{
    std::cout << "Hello from static member function.\n";
}

int main()
{
    Fn::prnt();
}