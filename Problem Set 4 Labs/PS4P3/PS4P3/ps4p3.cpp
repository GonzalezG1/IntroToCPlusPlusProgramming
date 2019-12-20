//
//  main.cpp
//  PS4P3
//
//  Created by Guadalupe Gonzalez on 2/19/16.
//  Copyright © 2016 Guadalupe Gonzalez. All rights reserved.
//

#include <iostream>
#include <iomanip>
using namespace std;
float comp_order(float monitors, float keyboards, float mice, float computers)
{
    float subtotal, sales_tax, shipping, total_order;
   
    subtotal=monitors*55+keyboards*25+mice*5+computers*600;
    sales_tax=subtotal*.07;
    shipping=25;
    total_order=subtotal+sales_tax+shipping;
    
    return total_order;
}
int main()
{
    float monitors, keyboards, mice, computers, total_order;
    //input
    cout<<"Enter amount of monitors";
    cin>>monitors;
    cout<<"enter amount of keyboards";
    cin>>keyboards;
    cout<<"enter amount of mice";
    cin>>mice;
    cout<<"enter amoutn of computers";
    cin>>computers;
    //process
    total_order=comp_order(monitors, keyboards, mice, computers);
    //output
    cout<<"The total order is"<< total_order<< endl;
    
    system("pause");
    return 0;
}