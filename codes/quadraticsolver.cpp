// The general form of Quadratic is Ax^2 + Bx + C =0.

// Input the coefficients in the order A , B , C on seperate lines



















#include <iostream>
#include <cmath>
using namespace std;

float x,y,z, discriminant ;


void delta(float a,float b,float c){
    discriminant = ((b*b)-(4*a*c));
    cout << "The Discriminant is : " << discriminant ;
}


void roots(float a,float b,float c){
    float root1, root2, disroot;
    disroot = pow(discriminant, 0.5);

    root1= (-b + disroot )/(2*a);
    root2= (-b - disroot )/(2*a);

    cout << "The roots are: "<< root1 <<" and " << root2;
}


int main(){

cout<< "The general form of Quadratic is Ax^2 + Bx + C =0 \n\nInput the coefficients in the order A , B , C \n\n";

cin >> x;
cin >> y;
cin >> z;
cout << "\n";


cout << "Equation: " << x<< " x^2   +  " << y << " x  +  " << z << "  = 0 ";



cout << "\n\n\n";

delta(x,y,z);
cout << "\n\n";
if (discriminant<0){
    cout << "There are no real roots to the equation. ";
}
else if(discriminant == 0){
    roots(x,y,z);
}

else if(discriminant > 0){
    roots(x,y,z);
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
