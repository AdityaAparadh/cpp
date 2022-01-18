#include <iostream>
using namespace std;


bool result;


void leapCalc(int year){

  int calc;
  calc = year%4;
  if (calc == 0){
    result= true;
  }
  else{
    result = false;
  }

}


int main(){
  int input;
  cin >> input;
  leapCalc(input);
  cout << "\n\n\n";
  if (input<0){
    cout << "Please enter a valid year. \n\n\n\n\n";
  }

  else if (result==0){
    cout << "No, " << input << " is not a leap year! \n\n\n\n\n";
  }
  else if(result==1){
    cout << "Yes, "<< input << " is a leap year! \n\n\n\n\n";
  }


cout << "######################################################### \n";
cout << "#                       Made By :                       # \n";
cout << "#                                                       # \n";
cout << "#                       ADITYA                          # \n";
cout << "#                                                       # \n";
cout << "######################################################### \n";






  return 0;
}
