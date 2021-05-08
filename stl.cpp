#include <vector>
#include <array>
#include <set>
#include <utility>
#include <map>
#include <iostream>

int main()
{
    // vector
    // std::vector<int> v = {1, 2, 3, 4, 5};
    // v.push_back(10);
    // std::cout << v[0] << '\n';
    // std::cout << v.at(3);
    // std::cout << v.size();

    // array
    // std::array<int, 5> arr = {1, 2, 3, 4, 5};
    // for(auto each : arr)
    // {
    //     std::cout << each << '\n';
    // }

    // set
    // std::set<int> myset = {4, 5, 6, 7, 8};
    // myset.insert(9);
    // myset.insert(10);
    // for(auto each : myset)
    // {
    //     std::cout << each << '\n';
    // }

    // std::map<int, char> mymap = {{1, 'a'}, {2, 'b'}, {3, 'c'}};
    // for(auto each : mymap)
    // {
    //     std::cout << each.first << ' ' << each.second << '\n';
    // }

    // std::map<int, char> mymap;
    // mymap[1] = 'a';
    // mymap[2] = 'b';
    // mymap[3] = 'c';
    // for(auto each : mymap)
    // {
    //     std::cout << each.first << ' ' << each.second << '\n';
    // }
    // mymap.insert({20, 'w'});
    // for(auto each : mymap)
    // {
    //     std::cout << each.first << ' ' << each.second << '\n';
    // }

    // std::map<int, char> mymap = {{1, 'a'}, {2, 'b'}, {3, 'c'}};
    // auto it = mymap.find(4);
    // if(it != mymap.end())
    // {
    //     std::cout << "Found: " << it->first << " " << it->second << '\n';
    // }
    // else
    // {
    //     std::cout << "Not found!";
    // }

    // pairs
    // std::pair<int, double> mypair = {123, 3.142};
    // std::cout << "first: " << mypair.first << '\n';
    // std::cout << "second: " << mypair.second << '\n';

    // make pairs
    int x = 123;
    double d = 3.142;
    std::pair<double, int> mypair = std::make_pair(d, x);
    std::cout << "first: " << mypair.first << '\n';
    std::cout << "second: " << mypair.second << '\n';


}