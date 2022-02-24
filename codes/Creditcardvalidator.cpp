// MADE BY ADITYA
// Programming Language: C++
// 
// Enter your input for Credit Card Number WITHOUT SPACES
//
// This program uses Luhn's algorithm to verify a valid credit card






#include <iostream>
using namespace std;

bool checkLuhn(const string& cardNo)
{
    int nDigits = cardNo.length();
 
    int nSum = 0, isSecond = false;
    for (int i = nDigits - 1; i >= 0; i--) {
 
        int d = cardNo[i] - '0';
 
        if (isSecond == true)
            d = d * 2;
 
        
        nSum += d / 10;
        nSum += d % 10;
 
        isSecond = !isSecond;
    }
    return (nSum % 10 == 0);
}
 

int main()
{
    string cardNo;


    cin >> cardNo;


    if (checkLuhn(cardNo)){
        cout << cardNo << " is a VALID card number!";
    } else{
        cout << cardNo << " is NOT a valid card number!\n" << endl << "Make sure you don't leave any spaces in the number!";
    }
    
cout << "\n\n\n\n";
cout << "######################################################### \n";
cout << "#                       Made By :                       # \n";
cout << "#                                                       # \n";
cout << "#                       ADITYA                          # \n";
cout << "#                                                       # \n";
cout << "######################################################### \n";
    return 0;
}