#include <iostream>
using namespace std;




//PRIME NUMBER CHECKER
int a,b;

void checkPrime(int input){
  a=2;
  b=0;

  if(input<=0){
    b=4;
    cout << "Please enter a positive integral number";
  } else if (input==1){
    b=3;
  cout << "1 is neither a prime nor a composite number. ";
}

else{
  while(a<input){

    if(input%a==0){
      b=1;
      break;
    }
    a++;
  }
}
}


int main(){
int in;
cin >> in;
checkPrime(in);

if (b==1){
  cout << "No, " << in << " is not a prime number, its a composite number!";
} else if(b==0){
  cout << "Yes, " << in << " is a prime number!";

}


return 0;
}
