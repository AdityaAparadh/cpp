#include <iostream>
#include <cmath>
using namespace std;


  const float math_pi = 3.1415;
  const long double math_e = 2.71828182845904523536028747135266249775724709369995957496696;


double eraisedtox(float a, int accuracy);
double lawnoneplusx(double a, int accuracy);
    


  float discriminant(float a,float b,float c){
      float discriminant;
      discriminant = ((b*b)-(4*a*c));
      return discriminant;
  }



double factorial(int n){   // Factorial function
      double fact=1;
      double i=1;

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


  int combination(int n, int r){  
      double a,b,c,comb;
      a = factorial(n);
      b = factorial(r);
      c = factorial(n-r);
      comb = (a/(b*c));
      return comb;
  }

double absolute(double a){    //Absoute function
    if (a<0){
        return -a;
    }
    else return a;
}

float max(int a, int b){

        if (a>b){
            return a;
        } else if (b<a){
            return b;
        }else return 0;

    }
float min(int a, int b){

        if (a>b){
         return b;
      } else if (b<a){
         return a;
     }else return 0;

    }

int gcd(int a, int b) {
    while(b) b ^= a ^= b ^= a %= b;
    return a;
}

int lcm(int a, int b){

        int lcm = 1;
        int c,d;

        d = a*b;
        c= gcd(a,b);

        lcm = d/c;
        return lcm;


    
     return gcd(a, b-a);
}

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

double power(double a, double b){    // Integral power function


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

double modulo(double x, double y){  // Function that return x%y for doubles


    while(x>=y){
        x = x-y;
    }
return x;
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

unsigned numberOfDigits (unsigned i)
{
    return i > 0 ? (int) log10 ((double) i) + 1 : 1;
}



int main(){

cout << numberOfDigits(5413);

return 0;
}
