//
//  main.cpp
//  PS4P4
//
//  Created by Guadalupe Gonzalez on 2/20/16.
//  Copyright © 2016 Guadalupe Gonzalez. All rights reserved.
//

#include <iostream>
#include <iomanip>
using namespace std;
float compt_a(float diameter)
{
    float a, p, r;
    p=3.14;
    r=diameter/2;
    a=p*(r*r);
    return a;
}
int main()
{
    float diameter, a;
    //input
    cout<<"Enter Diameter";
    cin>>diameter;
    //process
    a=compt_a(diameter);
    //output
    cout<<"The area of the circle is"<<a<<endl;
    system("pause");
    return 0;
}