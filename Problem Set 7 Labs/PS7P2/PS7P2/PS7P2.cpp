//
//  main.cpp
//  PS7P2
//
//  Created by Guadalupe Gonzalez on 3/13/16.
//  Copyright © 2016 Guadalupe Gonzalez. All rights reserved.
//

#include <iostream>
using namespace std;

float det_cpu(float num)
{
    float cost_per_unit;
    if (num==10)
        cost_per_unit=1.00f;
    else if (num==99)
        cost_per_unit=2.50f;
    else if (num==55)
        cost_per_unit=5.00f;
    else if (num==70)
        cost_per_unit=7.00f;
    else if (num==50)
        cost_per_unit=8.00f;
    return cost_per_unit;
    
}

int main()
{
    float cost_per_unit, qty, num, total;
    
//input
    cout<<"Enter Part Number:";
    cin>>num;
    cout<<"Enter quantity of part number";
    cin>>qty;
//process
    cost_per_unit=det_cpu(num);
    total=cost_per_unit*qty;
//output
    cout<<"Your part number is:    "<<num<<endl;
    cout<<"Cost per unit is        "<<cost_per_unit<<endl;
    cout<<"Your total is           "<<total<<endl;
    
    system("pause");
    return 0;
    
    
}
