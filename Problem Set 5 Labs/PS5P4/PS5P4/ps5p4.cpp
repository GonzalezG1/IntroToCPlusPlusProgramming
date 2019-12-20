//
//  main.cpp
//  PS5P3
//
//  Created by Guadalupe Gonzalez on 2/27/16.
//  Copyright © 2016 Guadalupe Gonzalez. All rights reserved.
//

#include <iostream>
#include <iomanip>

using namespace std;

float comp_charge(float amt_data)
{
    float data_charge, over_data;
    
    over_data=amt_data-5;
    
    if (amt_data<=5)
        data_charge=amt_data*5;
    else
        data_charge=125+over_data*10;
   
    return data_charge;
}

float comp_mincharge(float minutes)
{
 float min_charge;
    min_charge=minutes*.20f;
    return min_charge;
    
}

int main()
{
    float minutes, amt_data, total_charge;
   //input
    
    cout<<"Enter minutes";
    cin>>minutes;
    cout<<"enter amount of data used (GB)";
    cin>>amt_data;
    
    //process
    total_charge=comp_mincharge(minutes)+comp_charge(amt_data);
    
    //output
    
    cout<<"minutes:               "<<minutes<<endl;
    cout<<"Amount of data used    "<<amt_data<<endl;
    cout<<"total_charge:          "<<total_charge<<endl;
    
    system("pause");
    return 0;
    
}