#include <iostream>


using namespace std;

//Fibonacci number series
int main(){

cout << "Enter the length of Fibonacci sequence you want: ";
int l;

cin >> l;
if (l<0){

  cout << "Please enter a valid length!";

}

int a=1;
int b=1;
int c=1;
cout << a << " ";
cout << a << " ";


while (l>0) {


c=a;
a=a+b;
cout << a << " ";
b=c;
l--;

}


return 0;
}
