/*


MADE BY ADITYA
Programming Language: C++

Enter your input on seperate lines in the following form:

Starting seed    (an integral value)
hide             (optional, type "hide" to hide the graph if output is messy, else no need to enter anything on this line)












Collatz Conjecture states that if we take a positive integer and apply two simple rules: if its even, half it,
and if its odd multiply it by three and add one; we will always end up with a loop of 4,2,1
Note that its only a conjecture and has not been proven

This conjecture has many other names like Ulam conjecture, Kakutan's problem, Thwaites conjecture, Hasses' algorithm,
Syracuse problem, and 3n+1 conjecture

More info here-
https://en.wikipedia.org/wiki/Collatz_conjecture


The values in graph have been rounded to the nearest 0.1 units
It may provide "No output" for very large seeds.

*/






#include<iostream>
#include<cmath>
using namespace std;

int numberOfDigits(int i)
{
    if (i==0){
        return 1;
    }else{
    int x = log10(i) + 1;
    return x;
    }
}

double approx(double x){

    int integralPart = x;
    double decimalPart = x - integralPart;

    if(decimalPart >= 0.5){
        return (integralPart+1);
    }else {
        return (integralPart);
    }
}

double modulo(double x, double y){


    while(x>=y){
        x = x-y;
    }
return x;
}


void collatz(long double seed, string graphSwitch = "x"){

if(seed<=0){
    cout << "Please enter a postive integral value for seed." << endl << endl;
    cout << "Current seed: " << seed  << endl;
}else{

seed = seed*2;
int a=1;
long double b=seed;

while (b!=1){
    if(modulo(b,2) == 0){
        b = b/2;
    }else{
        b = 3*b + 1;
    }
    a++;
    }
cout << "Seed : " << seed/2 << endl;
cout << "Number of steps: " << a << "\n\n\n";
cout << "Numbers (n)";
if(graphSwitch!= "hide"){
    cout << "                  Plot of natural log(n)";
}
cout << endl << endl << endl;


while (seed!=1){

    if(modulo (seed,2) == 0){
        seed = seed/2;
    }else{
        seed = 3*seed + 1;
    }
    cout << seed;

    if (graphSwitch!="hide"){
    int spacer = 0;
    while((20-spacer)>=numberOfDigits(seed)){
            cout << " ";
            spacer++;
    }
    cout << "|";
    double g= approx((log(seed))*10);
    int counter = 0;
    while(counter < g){
        cout << "=";
        counter++;
    }
    }

    cout << endl;
    }
    cout<< "(Goes to 4)" << endl << endl << endl;

    if(graphSwitch == "hide"){
        cout << "GRAPH HIDDEN " << endl << "To show graph, don't enter \"hide\" on the second line of input, leave it blank" << endl;
    }else{
        cout << "  SCALE: \"=\" = 0.1 units  ";
    }
}
}

int main(){

long double input;
string graph ;
cin >> input >> graph;
collatz(input, graph);

cout << "\n\n\n\n";
cout << "######################################################### \n";
cout << "##                      Made By :                      ## \n";
cout << "##                                                     ## \n";
cout << "##                      ADITYA                         ## \n";
cout << "##                                                     ## \n";
cout << "######################################################### \n";
return 0;
}
