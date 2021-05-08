#include <iostream>
#include <memory>

class Base
{
public:
    virtual void prnt()
    {
        std::cout << "Hi from base class!\n";
    }
};

class Derived : public Base
{
public:
    void prnt()
    {
        std::cout << "Hi from derived class!\n";
    }
};

int main()
{
    // std::unique_ptr<int> p(new int{123});   // old
    // std::unique_ptr<int> p = std::make_unique<int>(123);    // c++14
    // std::cout << *p;

    // std::unique_ptr<Base> p = std::make_unique<Derived>();
    // p->prnt();

    std::shared_ptr<int> p1 = std::make_shared<int>(123);
    std::shared_ptr<int> p2 = p1;
    std::shared_ptr<int> p3 = p1;
}