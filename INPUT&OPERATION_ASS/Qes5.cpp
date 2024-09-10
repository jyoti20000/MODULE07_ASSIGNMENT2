#include <iostream>
using namespace std;

int main()
{
    char f_char;
    char s_char;

    cout << "Enter first character: ";
    cin >> f_char;
    cout << "Enter second character: ";
    cin >> s_char;
    cout << "The difference between 1st and 2nd character is: " << (int)f_char - (int)s_char;

    return 0;
}


