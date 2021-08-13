#include <iostream>

using namespace std;

template <typename T, typename U = char>
class test
{
 public:
   test();
};

template <typename T, typename U>
test<T, U>::test()
{
   std::cout << "test constructor called" << std::endl;
}

int main()
{
   test<int> test_;
}
