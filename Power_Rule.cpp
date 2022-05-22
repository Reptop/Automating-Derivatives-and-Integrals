#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout << "Sample Input: 3x^2" << endl;
    cout << "Only Compatible with Power Rule" << endl;
    cout << "\n";

    string s;
    cin >> s;

    // first get coefficient
    string coeffString = "";
    string expoString = "";

    int i;
    for (i = 0; s[i] != 'x'; ++i)
    {
        coeffString.push_back(s[i]);
    }
    // skip from the x to the stuff after the ^
    for (i = i + 2; i != s.length(); ++i)
    {
        expoString.push_back(s[i]);
    }

    float coeff = std::stof(coeffString);
    float expo = std::stof(expoString);

    cout << "Unconverted exponent: " << expoString << endl;
    cout << "Coefficient: " << coeff << endl;
    cout << "Converted Exponent: " << expo << endl;

    float newCoeff = coeff * expo;
    float newExpo = expo - 1;

    // exponent rounded to 2 decimals
    cout << "Derivative is: " << newCoeff << setprecision(2) << "x^" << newExpo;
}
