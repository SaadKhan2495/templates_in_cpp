#include <iostream>

using namespace std;

template <class T>
class test
{
 public:
   test();
};

template <class T>
test<T>::test()
{
   std::cout << "Generic test constructor called." << std::endl;
}

template <>
test<double>::test()
{
   std::cout << "Double test constructor called." << std::endl;
}

int main()
{
   test<int>    int_;
   test<double> double_;
   test<char>   char_;
}
