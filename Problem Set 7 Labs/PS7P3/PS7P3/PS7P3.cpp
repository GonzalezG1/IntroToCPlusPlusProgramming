//
//  main.cpp
//  PS7P3
//
//  Created by Guadalupe Gonzalez on 4/1/16.
//  Copyright © 2016 Guadalupe Gonzalez. All rights reserved.
//

#include <iostream>
using namespace std;

float det_price(float qty)
{
    float price;
    
    if (qty>1000)
        price=10.00f;
    else if (qty>500)
        price=20.00f;
    else
        price=30.00f;
    return price;
}
float det_tax(float qty)
{
    float tax, price;
    tax=price*.07;
    return tax;
    
}

int main ()
{
    float price, total, tax, qty;
    cout<<"Enter quantity";
    cin>>qty;
    
    price=det_price(qty);
    tax=det_tax(qty);
    total=price+tax;
    
    cout<<"The price is "<<price<<endl;
    cout<<"The tax is"<<tax<<endl;
    cout<<"Your total is"<<total<<endl;
    
    system("pause");
    return 0;
    
    
    
    
    
}