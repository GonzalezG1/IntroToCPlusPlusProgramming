//
//  main.cpp
//  PS7P1
//
//  Created by Guadalupe Gonzalez on 4/1/16.
//  Copyright © 2016 Guadalupe Gonzalez. All rights reserved.
//

#include <iostream>
using namespace std;

float comp_price(float qty)
{
    float ext_price;
    if (qty>10000)
        ext_price=10.00f;
    else if (qty>5000)
        ext_price=20.00f;
    else
        ext_price=30.00f;
    return ext_price;
    
}
int main()
{
    float ext_price, total, qty, tax;
    
    //input
    cout<<"Please enter quantity";
    cin>>qty;

    //process
    ext_price=comp_price(qty);
    tax=ext_price*.07;
    total=ext_price+tax;
    
    //output
    cout<<"Your total is" <<total<<endl;
    cout<<"The extended price was" <<ext_price<<endl;
    cout<<"The tax is"<< tax<<endl;
    
    system("pause");
    return 0;
}