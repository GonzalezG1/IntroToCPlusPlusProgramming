//
//  main.cpp
//  PS5P2
//
//  Created by Guadalupe Gonzalez on 2/26/16.
//  Copyright © 2016 Guadalupe Gonzalez. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

float total_price(float qty)
{
    float ext_price;
    if (qty<=100)
        ext_price=qty*5.00f;
    else
        ext_price=qty*4.00f;
    return ext_price;
}
float comp_tax(string nonprofit_code)
{
    float tax, total_order, qty;
    if (nonprofit_code=="yes")
        tax=1;
    else
        tax=.07f;
    total_order=tax* total_price(qty);
    return total_order;
    
}
int main()
{
    float ext_price, total, qty;
    string nonprofit_code;
    
    cout<<"enter quantity";
    cin>>qty;
    cout<<"Do you have a non profit code? Type yes or no";
    cin>>nonprofit_code;
    
    total=total_price(qty)+comp_tax(nonprofit_code);
    cout<<"Your total is" << total<< endl;
    cout<< "Your quantity is" <<qty<<endl;
    cout<< "Your extended price is" <<ext_price<<endl;
    
    return 0;
}