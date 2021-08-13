#include <iostream>

using namespace std;

template <typename T>
T add(T input_1, T input_2)
{
   return input_1 + input_2;
}

template <>
std::string add(std::string input_1, std::string input_2)
{
   return input_1.append(input_2);
}

int main()
{
   int         input_1 = 10, input_2 = 20;
   double      input_3 = 30.5, input_4 = 40.5;
   std::string input_5 = "abc", input_6 = "def";
   cout << "add int: " << add(input_1, input_2) << endl;
   cout << "add double: " << add(input_3, input_4) << endl;
   cout << "add string: " << add(input_5, input_6) << endl;
}
