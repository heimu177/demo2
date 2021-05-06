#include <iostream>
using namespace std;

template <class T>
class Calculator
{
    private:
        T arg1, arg2;
    public:
        Calculator(T x, T y)
        {
            arg1 = x;
            arg2 = y;
        }

        const T add() {return arg1 + arg2;}
        const T subtract() {return arg1 - arg2;}
        const T multiply() {return arg1 * arg2;}
        const T divide() {return arg1 / arg2;}
        const T max() { return arg1 > arg2? arg1 : arg2;}
        const T min() { return arg1 < arg2? arg1 : arg2;}
        
        void swap()
        {
            T temp;
            temp = arg1;
            arg1 = arg2;
            arg2 = temp;
        }

        void display()
        {
            cout << "Inputs are: " << arg1 << " and " << arg2 << endl;
            cout << "Addition: " << add() << endl;
            cout << "Subtraction: " << subtract() << endl;
            cout << "Multiplication: " << multiply() << endl;
            cout << "Division: " << divide() << endl;
            cout << "Max: " << max() << endl;
            cout << "Min: " << min() << endl;
        }
};

const unsigned int multpow2(const int number, const int power)
{
    return number << power;
}

const unsigned int divpow2(const int number, const int power)
{
    return number >> power;
}

int main()
{
    // Calculator<int> intCalc(2, 125);
    // Calculator<float> floatCalc(2.4, 0.5);

    // cout << "Int calc: " << endl;
    // intCalc.display();
    // cout << endl;
    // cout << "Float calc: " << endl;
    // floatCalc.display();
    cout << multpow2(2, 2) << endl;
    cout << divpow2(8, 1) << endl;
    cout << divpow2(8, 2) << endl;

    return 0;
}