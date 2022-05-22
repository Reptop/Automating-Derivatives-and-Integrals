#include <iostream>
#include <vector> 
#include <stdio.h>
#include <cstring> 
#include <map>
#include <chrono>
#include <stack>
#include <sstream>
#include <iomanip>      
using namespace std; 

int main() {
    cout << "Sample Input: 3x^2" << endl;
    cout << "Only Compatible with Power Rule" << endl;
    cout << "\n";
        
    string s; 
    cin >> s; 
    
    //first get coefficient 
    string coeffString = "";
    string expoString = "";

    int i;  
    for (i = 0; s[i] != 'x'; ++i) {
        coeffString.push_back(s[i]);
    }
    //skip from the x to the stuff after the ^
    for (i = i + 2; i != s.length(); ++i) {
        expoString.push_back(s[i]);
    }
        
    long long coeff = atof(coeffString.c_str());
    float expo = atof(expoString.c_str());

    cout << "Unconverted exponent: " << expoString << endl;
    cout << "Coefficient: " << coeff << endl;
    cout << "Converted Exponent: " << expo << endl; 

    long long newCoeff = coeff * expo; 
    float newExpo = expo - 1;

    cout << "Derivative is: " << newCoeff << "x^" << newExpo;   
}
