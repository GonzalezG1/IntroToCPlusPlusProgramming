//
//  main.cpp
//  ps3pr1
//
//  Created by Guadalupe Gonzalez on 2/6/16.
//  Copyright © 2016 Guadalupe Gonzalez. All rights reserved.
//

#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
float subtraction( float s1, float s2)
{
    float s;
    
    s = s1-s2;
    
    return s;
}

float product(float n1, float n2)
{
    float p;
    p = n1*n2;
    return p;
    
}
int main()
{
    float n1, n2, p, s, sq, sr, exp;
    
    cout << "Enter two numbers";
    cin >> n1 >> n2;
    
    //calling statement
    //user functions
    p = product(n1, n2);
    s = subtraction(n1, n2);
    //built in fuctions code in math.h
    sq = pow(n1, n2);
    sr = sqrt(p);
    exp = pow(n1, n2);
    
    //format output to 2 decimals places and right justified
    cout << setprecision(2) << fixed;
    cout << "The product is:   " << setw(8)<<p << endl;
    cout << "the difference is " << setw(8) <<s << endl;
    cout << "The square is     "<< setw(8) << sq << endl;
    cout << "square root       "<< setw(8) <<sr << endl;
    cout << "exponent          "<< setw(8)<< exp << endl;
    
    system("pause");
    return 0;
    
}

