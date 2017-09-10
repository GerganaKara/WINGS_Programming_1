//
//  Aufgaben_2.cpp
//  Aufgaben_1
//
//  Created by Gergana Karadzhova on 9/10/17.
//  Copyright © 2017 Gergana Karadzhova. All rights reserved.
//

#include "Aufgaben_2.hpp"

// IF Anweisungen

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
