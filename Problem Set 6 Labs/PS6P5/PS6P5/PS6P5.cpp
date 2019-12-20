//
//  main.cpp
//  PS6P5
//
//  Created by Guadalupe Gonzalez on 3/13/16.
//  Copyright © 2016 Guadalupe Gonzalez. All rights reserved.
//

#include <iostream>
using namespace std;
float det_total(float lbs)
{
    float total;
    if (lbs<=125)
        total=lbs*.70f;
    else
        total=lbs*.50f;
    return total;
    
}
float det_cost(float lbs)
{
    float cost_per_lb;
    if (lbs<=25)
        cost_per_lb=.70f;
    else
        cost_per_lb=.50f;
    return cost_per_lb;
    
}
int main()
{
    float cost_per_lb, total, lbs;
    
    cout<<"enter lbs";
    cin>>lbs;
    
    cost_per_lb=det_cost(lbs);
    total=det_total(lbs);
    
    cout<<"Your total cost is:"<<total<<endl;
    cout<<"cost per lb is" <<cost_per_lb<<endl;
    
    system("pause");
    return 0;
    
}