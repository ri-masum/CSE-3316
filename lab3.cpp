#include <iostream>
using namespace std;

int main()
{
    string str = "MyNameIsMASumAhmed5693243soletTestValue%#$$@#$@";
    int a, i, count = 0;
    int upper = 0, lower = 0, digit = 0, special = 0, vowels = 0, consonants = 0;

    a = str.size();

    for (i = 0; i < a; i++)
    {

        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            upper++;
            if (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
            {
                vowels++;
            }
            else
            {
                consonants++;
            }
        }
        else if (str[i] >= 'a' && str[i] <= 'z')
        {
            lower++;
            if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
            {
                vowels++;
            }
            else
            {
                consonants++;
            }
        }
        else if (str[i] >= '0' && str[i] <= '9')
            digit++;
        else if (str[i] != ' ')
            special++;
    }

    cout << " Input string: " << str << endl;

    cout << "Uppercase Letters: " << upper << endl;
    cout << "Lowercase Letters: " << lower << endl;
    cout << "Digits: " << digit << endl;
    cout << "Special characters: " << special << endl;
    cout << "Vowel: " << vowels << endl;
    cout << "Consonant: " << consonants << endl;
}