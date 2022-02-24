// MADE BY ADITYA
// Programming Language: C++
//
// Enter your input length for Pascal's Triangle only as a positive integer less than 13

#include <iostream>


using namespace std;


int factorial(int n){
    double fact=1;
    double i=1;
    while(i<=n){
        fact=fact*i;
        i++;

    }

    return fact;
}

int combination(int n, int r){

    double a,b,c,comb;
    a = factorial(n);
    b = factorial(r);
    c = factorial(n-r);

    comb = (a/(b*c));

    return comb;
}


void pascalsTriangle(int num){
    int b =0;
    while(b<=num){

        cout << "    ";
        b++;
    }
    cout << "1 \n\n"; // Initial 1
    for(int n=1; n<=num ; n++){

        for(int a = num -n ;(a)>=0;a--){
            cout << "    ";

        }

        cout << 1 << "      ";
        for(int r=1; r<=n ; r++){

                int out;
                out= combination(n,r);
                cout << out << "      ";

        }
        cout << "\n"<< endl;
    }


}



int main() {


int input;
cin >> input;

if ( input <=0){
    cout << " Please enter a valid length for the Pascal's Triangle!";
} else if(input > 12){
    cout << "The Pascal's Triangle becomes too distorted at length above 12, try a smaller number!";
}
else{
cout << "Pascal's triangle: \n\n" <<endl;
pascalsTriangle(input);
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
