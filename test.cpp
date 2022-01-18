#include <iostream>
using namespace std;





int main(){


int i,j,input;

cin >> input;

for(i=1 ; i<= input; i++ ){


  for (j=input; j>=i; j--){

      cout << "*";

  }

  cout << endl;

}


  return 0;
}
