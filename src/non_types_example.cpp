#include <iostream>

using namespace std;

template <typename T, int max>
bool is_greater(T input)
{
   if (input < max)
   {
      return false;
   }
   return true;
}

int main()
{
   int    input_1 = 10, input_2 = 20;
   double input_3 = 10.1, input_4 = 20.1;
   cout << "is_greater<int, 15>(" << input_1 << "): " << is_greater<int, 15>(input_1) << endl;
   cout << "is_greater<int, 15>(" << input_2 << "): " << is_greater<int, 15>(input_2) << endl;
   cout << "is_greater<double, 15>(" << input_3 << "): " << is_greater<double, 15>(input_3) << endl;
   cout << "is_greater<double, 15>(" << input_4 << "): " << is_greater<double, 15>(input_4) << endl;
}
