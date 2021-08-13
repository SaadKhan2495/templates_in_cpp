#include <iostream>

using namespace std;

template <class T>
class calculator
{
 public:
   calculator(T input_1, T input_2);
   T add();
   T multiply();

 private:
   T _num_1;
   T _num_2;
};

template <class T>
calculator<T>::calculator(T input_1, T input_2)
   : _num_1(input_1)
   , _num_2(input_2)
{}

template <class T>
T calculator<T>::add()
{
   return _num_1 + _num_2;
}

template <class T>
T calculator<T>::multiply()
{
   return _num_1 * _num_2;
}

int main()
{
   int                input_1 = 10, input_2 = 20;
   double             input_3 = 1.1, input_4 = 1.2;
   calculator<int>    int_cal(input_1, input_2);
   calculator<double> double_cal(input_3, input_4);
   cout << "Input type: int, Add: " << int_cal.add() << endl;
   cout << "Input type: int, Multiply: " << int_cal.multiply() << endl;
   cout << "Input type: double, Add: " << double_cal.add() << endl;
   cout << "Input type: double, Multiply: " << double_cal.multiply() << endl;
}
