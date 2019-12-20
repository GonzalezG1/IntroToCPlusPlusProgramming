//
//  main.cpp
//  PS6P2
//
//  Created by Guadalupe Gonzalez on 3/12/16.
//  Copyright © 2016 Guadalupe Gonzalez. All rights reserved.
//

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
float det_com(float qty)
{
    float commission;
    if (qty>=1000)
        commission=10.95f;
    else
        commission=14.95f;
    return commission;
}
int main()
{
    float commission, share_price, qty, total;
    string ticker;
    //input
    cout<<"Enter quantity of shares";
    cin>>qty;
    cout<<"Enter share price";
    cin>>share_price;
    cout<<"Enter the Ticker Symbol";
    cin>>ticker;
    //process
    commission=det_com(qty);
    total=qty*share_price+commission;
    //output
    cout<<"Ticker Symbol:    "<<ticker<<endl;
    cout<<"Share Price is   $"<<share_price<<endl;
    cout<<"Quantity of shares"<<qty<<endl;
    cout<<"Commission paid   "<<commission<<endl;
    cout<<"Your total is     "<<total<<endl;
    
    system("pause");
    return 0;
    
}