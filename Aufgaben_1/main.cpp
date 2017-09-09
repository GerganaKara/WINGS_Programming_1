//
//  main.cpp
//  Aufgaben_1
//
//  Created by Gergana Karadzhova on 9/9/17.
//  Copyright © 2017 Gergana Karadzhova. All rights reserved.
//

/*#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    // task 1 pg 56
    int var = 10;
    char c = 'G';
    float a = 3.1;
    const float PI = 3.14;
    string space = " ";
    
    cout << "Hello, nice big World!\n";
    cout << var << space << c << space << a << space<< PI << a<<endl;
    printf("hi\n");
           
    return 0;
    
  */
    // task 2 pg 57 - F to C
    // c = ((f -32) * 5/9)
#include <stdio.h>
#include <iostream>

using namespace std;

int main( int argc, char* argv[]){
    double C = 0.0;
    double F = 20.0;
    printf("The temperature in F is ");
    
    scanf_s("%lf", &F, 1);
    
    C = (F - 32) * 5.0/9.0;
    
    printf("%4.2f Grad Fahrenheit = %4.2f Grad Celsium \n", F, C);
    return 0;
}

    

