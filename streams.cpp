#include <fstream>
#include <sstream>
#include <iostream>
#include <string>

int main()
{
    // std::fstream fs{"myfile.txt"};
    // std::string s;
    // char c;

    // while(fs)
    // {
    //     std::getline(fs, s);
    //     std::cout << s << '\n';
    // }

    // while(fs >> std::noskipws >> c) std::cout << c;

    // std::fstream fs{"myoutputfile.txt", std::ios::out};
    // std::fstream fs{"myoutputfile.txt", std::ios::app};
    // fs << "Monday" << '\n';
    // fs << "Tuesday" << '\n';
    // fs << "Wednesday" << '\n';
    // fs << "Thursday" << '\n';
    // fs << "Friday" << '\n';

    // std::stringstream ss{"Hello World"};
    // std::stringstream ss{"Hello Universe"};
    // std::string s = ss.str();
    // std::cout << ss.str();
    // std::cout << s;

    // std::string s = "Hello tomorrow";
    // std::stringstream ss{s};
    // std::cout << ss.str();

    // char c = 'W';
    // int x = 123;
    // double d = 3.142;
    // std::stringstream ss;
    // ss << c << x << d;
    // std::cout << ss.str();

    std::string s = "W 123 3.142";
    std::stringstream ss{s};
    char c;
    int x;
    double d;
    ss >> c >> x >> d;
    std::cout << c << '\n' << x << '\n' << d;
}