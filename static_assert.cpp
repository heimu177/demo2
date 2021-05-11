int main()
{
    constexpr int x{123};
    static_assert(x == 123, "The constexpr value is not 456.");

}