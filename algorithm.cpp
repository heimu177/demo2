#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

int main()
{
    std::vector<int> v = {1, 20, 5, 12, 8};
    // std::sort(v.begin(), v.end(), std::greater<int>());
    // for(auto each : v)
    // {
    //     std::cout << each << '\n';
    // }
    auto result = std::find(v.begin(), v.end(), 4)
    if(result !=v.end())
    {
        std::cout << "Element found: " << *result;
    }
    else
    {
        std::cout << "Element not found.";
    }
}