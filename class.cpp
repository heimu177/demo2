#include <iostream>

class BaseClass
{
public:
    char c;
    int x;
};

class DerivedClass : public BaseClass
{

};

int main()
{
    DerivedClass o1;
    o1.c = 'W';
    o1.x = 123;

    return 0;
}