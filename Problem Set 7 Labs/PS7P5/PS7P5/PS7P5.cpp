//
//  main.cpp
//  PS7P5
//
//  Created by Guadalupe Gonzalez on 4/1/16.
//  Copyright © 2016 Guadalupe Gonzalez. All rights reserved.
//

#include <iostream>
using namespace std;
float comp_total(float tickets)
{
    float price_per_t;
    if (tickets>=25)
        price_per_t=50.00f;
    else if (tickets>=10)
        price_per_t=60.00f;
    else if (tickets>=5)
        price_per_t=70.00f;
    else
        price_per_t=75.00f;
    return price_per_t;
    
}
int main ()
{
    float tickets, cost;
    
    //input
    cout<<"Enter amount of tickets";
    cin>>tickets;
    //process
    cost=comp_total(tickets);
    //output
    cout<<"amount of tickets purchased:"<<tickets<<endl;
    cout<<"Your total cotst is"<<cost<<endl;
    
    system("pause");
    return 0;
    
}