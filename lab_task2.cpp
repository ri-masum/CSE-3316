#include <iostream>
#include <string>

int main()
{
    std::string inputString = " this is the line im gonna test";

    int length = inputString.length();
    std::cout << "Length of the string: " << length << std::endl;

    int space = 0;
    for (char c : inputString)
    {
        if (c == ' ')
        {
            space++;
        }
    }
    std::cout << "Number of spaces in the string: " << space << std::endl;

    return 0;
}
