#include <iostream>
using namespace std;


void spacer(int param){

  for(int k=0; k<=param ; k++ )
  cout << " ";

}


int main(){


int i,j,l,input;

cin >> input;

l=1;
for(i=1 ; i<= input; i=i+2){

  l++;

      spacer(l);
  for (j=input; j>=i; j--){


      cout << "*";

  }

  cout << endl;

}


  return 0;
}
