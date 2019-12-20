//
//  main.cpp
//  PS8P4
//
//  Created by Guadalupe Gonzalez on 4/3/16.
//  Copyright © 2016 Guadalupe Gonzalez. All rights reserved.
//

#include <iostream>
using namespace std;
float det_cost( char type)
{
    float price;
    if (type=='p')
        price=65.00f;
    else if (type=='r')
        price=50.00f;
    else
        price=10.00f;
    return price;
    
}
int main()
{
    float price;
    char type;
    
    //input
    cout<<"Enter the type of service";
    cin>>type;
    
    //process
    price=det_cost(type);
    
    //output
    cout<<"The price of your type of service is"<<price<<endl;
    
    system("pause");
    return 0;
    
}