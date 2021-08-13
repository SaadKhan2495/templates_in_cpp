#include <iostream>

using namespace std;

template <typename T>
T square(T input)
{
   return input * input;
}

int main()
{
   int    input_1 = 10;
   float  input_2 = 12.0;
   double input_3 = 14.0;
   cout << "Input: " << input_1 << ", Output: " << square(input_1) << endl;
   cout << "Input: " << input_2 << ", Output: " << square(input_2) << endl;
   cout << "Input: " << input_3 << ", Output: " << square(input_3) << endl;
}
