#include <iostream>

class Parent
{
public:
    virtual void prnt() = 0;
    virtual ~Parent() {};
};

class Child : public Parent
{
    void prnt()
    {
        std::cout << "Hello from derived class.\n";
    }
};

int main()
{
    Parent* o1 = new Child;
    o1->prnt();
    delete o1;
    return 0;
}