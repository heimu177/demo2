#include <iostream>

void fn(int arg[])
{
    std::cout << "Address: " << arg << std::endl;
    std::cout << "Value: " << *arg << std::endl;
}

int main()
{
    // int x = 123;
    // int* pint = &x;
    // void* pvoid = pint;
    // int* pint2 = static_cast<int*>(pvoid);

    // int arr[5] = {1,2,3,4,5};
    // int* parr = arr;
    // fn(arr);

    auto x = static_cast<double>(3);
    std::cout << x;

    return 0;
}