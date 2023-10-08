#include <iostream>

//int glob{ 100 };
//
//int func()
//{
//    static int n = 0;
//    return ++n;
//}

class MyClass
{
    
public:
    int n;
    static int c;

    void PrintN()
    {
        std::cout << "n = " << n << "\n";
    }

    static void PrintC()
    {
        std::cout << "c = " << c << "\n";
    }
};

int MyClass::c = 0;


int main()
{
    /*for (int i = 0; i < 5; i++)
        std::cout << func() << "\n";*/

    MyClass obj1;
    obj1.n = 100;
    obj1.c = 5000;

    std::cout << obj1.n << " " << obj1.c << "\n";

    MyClass obj2;
    obj2.n = 200;
    obj2.c = 10000;

    std::cout << obj2.n << " " << obj2.c << "\n";

    std::cout << obj1.n << " " << obj1.c << "\n";

    MyClass::c = 1000;
    obj1.PrintN();

    MyClass::PrintC();
}
