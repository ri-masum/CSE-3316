#include <iostream>
#include <typeinfo>
using namespace std;

int main()
{
    int num = 45;
    double flatNum = 45.045;
    string smallText = "Masum";
    char smallLtr = 'M';
    bool boolValue = true;


    cout << "Integer value = " << num << ", Type = " << typeid(num).name() << ", Size = " << sizeof(num) << " bytes\n";
    cout << "Float value = " << flatNum << ", Type = " << typeid(flatNum).name() << ", Size = " << sizeof(flatNum) << " bytes\n";
    cout << "String value = " << smallText << ", Type = " << typeid(smallText).name() << ", Size = " << sizeof(smallText) << " bytes\n";
    cout << "Character value = " << smallLtr << ", Type = " << typeid(smallLtr).name() << ", Size = " << sizeof(smallLtr) << " bytes\n";
    cout << "Bool value = " << boolValue << ", Type = " << typeid(boolValue).name() << ", Size = " << sizeof(boolValue) << " bytes\n";

    return 0;
}

