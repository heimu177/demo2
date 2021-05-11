#include <iostream>
#include <unordered_set>
#include <unordered_map>

int main()
{
    // underordered set
    // std::unordered_set<int> myset = {1, 2, 4, -5, -34, 10};

    // myset.insert ({55, 666});
    // myset.erase(1);

    // for(auto each : myset)
    // {
    //     std::cout << each << '\n';
    // }

    // unordered map
    std::unordered_map<char, int> mymap = {{'a', 1}, {'b', 2}, {'c', 3}};

    mymap.insert({'d', 4});
    mymap['e'] = 5;

    for (auto each : mymap)
    {
        std::cout << each.first << ' ' << each.second << '\n';
    }
}