#include <iostream>
#include <iomanip>
using namespace std;


const long double math_e = 2.71828182845904523536028747135266249775724709369995957496696;




double absolute(double a){    //Absoute function
    if (a<0){
        return -a;
    }
    else return a;
}

double eraisedtox(float a, int accuracy);
double lawnoneplusx(double a, int accuracy);



double lawn(float a){   //Function that gives ln (x) by repeated division by e and using function lawnoneplusx()
    float epower=0;
    while(a>1){

    a= a/math_e;
    epower++;
    }
    double c = lawnoneplusx(a-1, 30);

    double answer = epower+c;
    return answer;

}


double power(double a, double b){    // The Main Power Function


// This function is indirectly recursive


    int integralPart;
    double decimalPart;

    integralPart = b;
    decimalPart = b - integralPart;

    if (decimalPart == 0){

        double answer=1;


        if (b<0){
            b = absolute(b);
            while (b>0){
            answer = answer*a;
            b--;
            }

        answer = 1/answer;
        
        return answer;
        }
        else if(b==0){
            return 1;
        }
        else{

            while (b>0){
                answer = answer*a;
                b--;
            }
        return answer;

        }

    }else{

        double answer = eraisedtox ((b*lawn(a)), 30);
        return answer ;



    }


}




double factorial(int n){   // Factorial function
      double fact=1;
      int i=1;

      if (n<=0){
          return 1;
      }else{
      while(i<=n){
          fact=fact*i;
          i++;
      }
      return fact;
  }
}





double eraisedtox(float a, int accuracy){ //  Function that gives e^x using Taylor series
    int b=0;
    double answer=0;

    while(b<=accuracy){

        answer = answer + (power(a,b))/factorial(b);

        b++;
    }

return answer;
}






double lawnoneplusx(double a, int accuracy){  // Function that gives ln(1+x) using Taylor series

    int b=1;
    double answer=0;

    while (b<=accuracy){

        answer = answer + (power(-1,b+1)*(power(a,b)/b));

    b++;
    }
    return answer;
}










//######################################## MAIN ########################################################################






int main(){
    float a,b;
    cin >> a >> b;
    cout  << "-> " << a <<  "^" << b << " = ";

    cout  << setprecision(6)  << power(a,b) << endl;

    cout << "\n\n\n\n";
    cout << "######################################################### \n";
    cout << "##                      Made By :                      ## \n";
    cout << "##                                                     ## \n";
    cout << "##                      ADITYA                         ## \n";
    cout << "##                                                     ## \n";
    cout << "######################################################### \n";

    return 0;
}
