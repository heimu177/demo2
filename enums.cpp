#include <iostream>

enum class Days
{
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday,
    Sunday
};

int main()
{
    Days myday = Days::Friday;
    if(myday == Days::Friday) std::cout << "TGIF!!\n";

    switch(myday)
    {
    case Days::Monday:
        std::cout << "I hate Monday!\n";
        break;
    default:
        break;
    }

    return 0;
}