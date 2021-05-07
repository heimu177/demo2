#include <iostream>

namespace Secret
{
    int x;
    double d;
}

namespace Secret2
{
    char c;
    bool b;
}

int main()
{
    Secret::x = 123;
    Secret::d = 3.124;
    Secret2::c = 'W';
    Secret2::b = 0x1;
    std::cout << Secret2::b;

    return 0;

}