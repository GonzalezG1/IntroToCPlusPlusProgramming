//
//  main.cpp
//  PS8Problem2
//
//  Created by Guadalupe Gonzalez on 4/3/16.
//  Copyright © 2016 Guadalupe Gonzalez. All rights reserved.
//


#include <iostream>
#include <string>
using namespace std;

float det_rate(float p_amt)
{
    float rate;
    
    if (p_amt>200000)
        rate=.04f;
    else if (p_amt>=100000)
        rate=.03f;
    else
        rate=.025f;
    return rate;
    
}
int main()
{
    float p_amt, rate, first_int;
    
    //input
    cout<<"Enter Principle Amount";
    cin>>p_amt;
    
    //process
    rate=det_rate(p_amt);
    first_int=rate+p_amt;
    //output
    cout<<"Your principle amout is   "<<p_amt<<endl;
    cout<<"Your mortgage rate is     "<<rate<<endl;
    cout <<"Your first year of interest is"<<first_int<<endl;
    
    system("pause");
    return 0;
    
}
