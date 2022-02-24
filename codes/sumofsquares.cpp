#include <iostream>
using namespace std;

// sum of n square series

int sumOfSquares( int num){
    int a=1,sum=0;
    while(a<=num){
        sum = sum + (a*a);
        a++;
    }
return sum;

}

int sumOfSquares2(int num){
    
    int sum;

    sum = ((num)*(num+1)*(2*num+1))/6;
    return sum;
}








int main()
{
int input,output;
cin >> input;

output = sumOfSquares(input);

cout << "The sum till " << input << " is : " << output;

return 0;
}