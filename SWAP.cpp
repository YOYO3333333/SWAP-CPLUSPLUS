#include <iostream>
void swap(int& a, int& b);
int main()
{
    int a = 3;
    int b = 19;

    std::cout << "Before: a = " << a << ", b = " << b << '\n';
    swap(a, b);
    std::cout << "After: a = " << a << ", b = " << b << '\n';

    std::cout << "Before: a = " << a << ", b = " << b << '\n';
    swap(a, b);
    std::cout << "After: a = " << a << ", b = " << b << '\n';
}
                                                            

void swap(int& a, int& b)
{
int temp = a;
a = b;
b = temp;
    
}
