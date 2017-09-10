//
//  Aufgaben_2.cpp
//  Aufgaben_1
//
//  Created by Gergana Karadzhova on 9/10/17.
//  Copyright © 2017 Gergana Karadzhova. All rights reserved.
/*

#include "Aufgaben_2.hpp"

// 1. IF Anweisungen

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
*/
// 2. While Anweisung e ˆ z

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
