//
//  main.cpp
//  Ps5p1
//
//  Created by Guadalupe Gonzalez on 2/20/16.
//  Copyright © 2016 Guadalupe Gonzalez. All rights reserved.
//

#include <iostream>
#include <iomanip>
using namespace std;
float comp_order(float qty)
{
    float total_order;
    if (qty >= 100)
        total_order=qty*2.50f;
    else
        total_order=qty*3.00f;
    return total_order;
    
}
int main()
{
    float total_order, qty;
    //input
    cout<<"Enter amount of quantity of items ordered";
    cin>> qty;
    //process
    total_order=comp_order(qty);
    //output
    cout<<"Total order:"<<total_order<<endl;
    system("pause");
    return 0;
    
}