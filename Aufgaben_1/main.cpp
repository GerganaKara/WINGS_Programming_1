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

/* task 2 pg 57 - F to C
    // c = ((f -32) * 5/9)

#include <stdio.h>
#include <iostream>

using namespace std;

int main( int argc, char* argv[]){
    double C = 0.0;
    double F = 20.0;
    printf("The temperature in F is ");
    
    
    // error Use of undeclared identifier
    //scanf_s("%lf", &F, 1);
    
    C = (F - 32) * 5.0/9.0;
    
    printf("%4.2f Grad Fahrenheit = %4.2f Grad Celsium \n", F, C);
    return 0;
}

 
// task 3 - pg 58, varialbes and formats 
 
#include <iostream>
#include <stdio.h>

using namespace std;

int main ( int argc, char* argv[]){
    
    int i = 1;
    float m = 2.33;
    double t= 6.34;
    float n= 2.33e3;
    char p[] = "Gergana";
    
    i = 106;
    printf("Ingerer i = %i \n",i);
    printf("Stirng p = %s \n", p);
    printf("Dezimalzahl %d dezimal = %i \n", i, i);
    printf("Dezimalzahl %d hexadezimal = %x \n", i, i);
    printf("Dezimalzahl %d hexadezimal = %X \n", i, i);
    printf("Dezimalzahl %d oktal = %o \n", i, i);
    printf("Dezimalzahl %d Zeichen = %c \n", i, i);


    return 0;

// task 4 - pg 59 Benzinverbrauch und - kosten
// declare Km konst, Benzinpreis je Liter;

#include <iostream>
#include <stdio.h>

using namespace std;

#define benz_preis  1.50
#define verb_benz  1000.00
#define km_anzahl  100


int main (){

    
    float  verb_benz_100,benz_preis_100;
    // per km this car uses -- 10 km
    verb_benz_100 =  100. * verb_benz / km_anzahl;
    benz_preis_100 = 100 * benz_preis;
    printf("Per 100 km this car uses %6.2f liters Benzin. This costs %6.2f \n", verb_benz_100, benz_preis_100);
    
    printf("Price per liter \t : %6.2f\n", (float)km_anzahl);
    

#include <iostream>
#include <stdio.h>
using namespace std;

int main () {
    
    int zahl;
    do
    {
        scan ( zahl, 1);
        if (zahl <0) continue;
        printf("%d\n", zahl);
    }
    while (zahl  < 100);
    return 0;
*/

 


