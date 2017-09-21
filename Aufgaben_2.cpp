//
//  Aufgaben_2.cpp
//  Aufgaben_1
//
//  Created by Gergana Karadzhova on 9/10/17.
//  Copyright © 2017 Gergana Karadzhova. All rights reserved.
/*

#include "Aufgaben_2.hpp"

// 1. IF Anweisungen - pg 90

#include <iostream>
using namespace std;

int main()
{
    int n, i;
    bool isPrime = true;
    
    cout << "Enter a positive integer: ";
    cin >> n;
    
    for(i = 2; i <= n / 2; ++i)
    {
        if(n % i == 0)
        {
            isPrime = false;
            break;
        }
    }
    if (isPrime)
        cout << "This is a prime number \n";
    else
        cout << "This is not a prime number \n";
    
    return 0;
}

// 2. While Anweisung e ˆ z - pg 90

#include <iostream>
using namespace std;
#include <math.h>
#include <stdio.h>

// declare recursive function
int fak(int);
int fak (int n) {
    
    if ( n>0)
        return n * fak(n-1);
    else
        return 1;
}
// main program
int main () {
    
    double Z, e = 1.00;
    int N;
    
    cout << "Enter positive integer N: ";
    cin >> N;
    
    cout << "Enter real number Z: ";
    cin >> Z;
    
    for ( int i = 1; i <= N; i++) {
        
        e += (pow(Z,i)/fak(i));
        cout << e << endl;
    }
    
    cout << "e ^ Z equals : \n" << e << endl;

    }

// Switch Anweisung pg 91

// version with IF

#include <iostream>
using namespace std;
#include <stdio.h>

int main() {
    
    int Z;
    cout << "Enter a number Z: ";
    cin >> Z;
    
    if ( Z > 0 && Z < 10)
        cout << Z << " is between 0 and 10 \n";
    else
        cout << Z << " is not between 0 and 10 \n";

    
    if (Z % 2 == 0)
        cout << Z << " is even \n";
    else
        cout << Z << " is uneven \n ";

    
}

//version with Switch
#include <iostream>
using namespace std;
#include <stdio.h>

int main(){
    
    int Z;
    cout << "enter a number, int: ";
    cin >> Z;
    
    switch ( Z >= 0 && Z <= 10) {
        case true :
                cout << Z << " is between 0 and 10 \n";
                break;
        case false:
            cout << Z << " is not between 0 and 10 \n";
                break;
      
    }
    
    switch(Z % 2)
        {
                //If n%2 == 0
            case 0: printf("Number is Even\n");
                break;
                //Else if n%2 != 0
            case 1: printf("Number is Odd\n");
                break;
        }
    }
*/

// 5. Funktionen Fakultät Berechnung
#include <iostream>
using namespace std;
#include <stdio.h>

//iterative
int fak_iter ( int n) {
    
    int ret = 1;
    
    for (int i =2; i <= n; ++i)
    { ret *= i;}
    
    return ret;
}

// recursive

int fak_rec ( int n) {
    
    if (n > 0)
        return n* fak_rec(n -1 );
    else
        return 1;
}

// recursive with Referenzparameter

int fact_ref(int &n)
{
    if (&n > 1)
    {
        int tmp = &n - 1;
        fact_ref(tmp);
        &n *= tmp;
    }
}

int main () {
    int Z;
    cout << "Enter a number : ";
    cin >> Z;
    cout << "Recursive calc result: "<< fak_rec (Z)<< endl;
    cout << "Iterative calc result: "<< fak_iter (Z)<< endl;
    int factorial = fact_ref(&Z);
    cout << "Factorial by rec and ref is: "<< factorial << endl;
}
