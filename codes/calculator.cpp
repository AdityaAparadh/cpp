#include <iostream>
using namespace std;





int main(){


  double op1,op2, answer ;
  string oper ;
  int a ;



cout << "CALCULATOR";
cout << "\n\n\nPlease enter 1st operand, 2nd operand and the operator respectively: \n\n";



cin >> op1;
cin >> op2;
cin >> oper;



if (oper == "+"){ a=1;  }

else if (oper == "-"){ a=2;  }

else if (oper == "*"){ a=3;  }

else if (oper == "/"){ a=4;  }



else{

cout << "Please enter a valid operator.   +   -   *   /   ";

}


switch(a){

case 1:
answer = op1 + op2;
break;


case 2:
answer = op1 - op2;
break;


case 3:
answer = op1 * op2;
break;

case 4:
answer = op1 / op2;
break;

  }



cout << "The answer is : " << answer;


  return 0;
}
