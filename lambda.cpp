#include <iostream>
#include <vector>
#include <algorithm>

class MyClass
{
public:
    // void operator()(int x)
    // {
    //     std::cout << "Function object with parameter: " << x << '\n';
    // }

    // bool operator()(int x)
    // {
    //     return (x % 2 == 0 ? true : false);
    // }
};

int main()
{
    // MyClass o;
    // bool isEven = o(184);
    // if(isEven)
    // {
    //     std::cout << "Number is even." << '\n';
    // }
    // else
    // {
    //     std::cout << "Number is odd." << '\n';
    // }

    // lambda expression
    // auto mylambda = [](int x, int y)
    // {
    //     std::cout << "X: " << ++x << " Y: " << ++y;
    // };
    // mylambda(123, 456);

    // std::vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 20, 30};
    // auto geteven = std::count_if(std::begin(v), std::end(v), 
    // [](int x){return x % 2 == 0;});
    // std::cout << "Number of even vectors: " << geteven;
}