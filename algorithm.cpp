#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

int main()
{
    // std::vector<int> v = {1, 20, 5, 12, 8};
    // // std::sort(v.begin(), v.end(), std::greater<int>());
    // // for(auto each : v)
    // // {
    // //     std::cout << each << '\n';
    // // }
    // auto result = std::find(v.begin(), v.end(), 4)
    // if(result !=v.end())
    // {
    //     std::cout << "Element found: " << *result;
    // }
    // else
    // {
    //     std::cout << "Element not found.";
    // }

    // std::vector<int> source = {1, 2, 3, 4, 5};
    // std::vector<int> dest(3);
    // std::copy(source.begin(), source.end()+3, dest.begin());

    // for(auto each : dest)
    // {
    //     std::cout << each << '\n';
    // }

    // min max
    std::vector<int> v = {1,2,3,4,5};
    auto maxVal = std::max_element(std::begin(v), std::end(v));
    auto minVal = std::min_element(std::begin(v), std::end(v));
    std::cout << "Max value: " << *maxVal << '\n';
    std::cout << "Min value: " << *minVal;
}