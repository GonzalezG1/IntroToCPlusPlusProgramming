//
//  main.cpp
//  PS8P3
//
//  Created by Guadalupe Gonzalez on 4/3/16.
//  Copyright © 2016 Guadalupe Gonzalez. All rights reserved.
//

#include <iostream>
using namespace std;

float det_p( char location)
{
    float price;
    if (location=='A')
        price=45.00f;
    else if (location=='B')
        price=30.00f;
    else
        price=20.00f;
    return price;
    
    
}
int main()
{
    float price, tickets, total;
    char location;
    
    //input
    cout<<"Enter amount of tickets";
    cin>>tickets;
    cout<<"enter location of tickets";
    cin>>location;
    
    //process
    price=det_p(location);
    total=price*tickets;
    
    //output
    
    cout<<"The total cost is"<<total<<endl;
    cout<<"Amount of tickets"<<tickets<<endl;
    cout<<"Price of tickets"<<price<<endl;
    
    system("pause");
    return 0;
    
}