#include <iostream>
#include <cmath>
using namespace std;





int main(){



int sum, i, input;

cin >> input;

if (input <= 0){
  cout << "Please enter an odd number greator than zero.";
}

else if (input%2 == 0){
  cout << "Please enter an odd number";
}

else {
  sum = 0;
  i = 1;
  do {
    sum = sum + i ;
    i= i + 2;
  }
  while (i <= input);

cout << "The sum till " << input << " is " << sum ;

}






  return 0;
}
