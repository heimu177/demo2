#include <iostream>
#include <string>

int main()
{
    try
    {
        bool flag1 = false;
        bool flag2 =  true;

        if(flag1) throw 123;
        if(flag2) throw std::string{"Some string error"};
    }
    catch(int e)
    {
        std::cout << "The int exception has a value of " << e << 'n';
    }
    catch(const std::string& e)
    {
        std::cout << "The string exception has a value of " << e << 'n';
    }
}