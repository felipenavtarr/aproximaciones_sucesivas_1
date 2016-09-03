/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: felipe
 *
 * Created on 24 de agosto de 2016, 19:24
 */

#include <cstdlib>
#include <iostream>
#include <cmath>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv)
{
    double a = 1.0/3.0;
    int b = 2;
    double d = 1e-3/27;
    double c = 0.02;
    
    double x = 0.0;
    double difference = 0.0;
    double limite = 0.0000001;
    
    do {
        double anterior = x;
        x = pow(d/pow(c+x,b),a);
        difference = abs(x - anterior);

        cout << x << endl;   
    } while (difference > limite);
    
    return 0;
}

