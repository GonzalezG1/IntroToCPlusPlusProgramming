//
//  main.cpp
//  PS6P4
//
//  Created by Guadalupe Gonzalez on 3/13/16.
//  Copyright © 2016 Guadalupe Gonzalez. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;
float comp_tax(float price, string type_code)
{
    float tax;
    if (type_code=="L")
        tax=price*.15f;
    else
        tax=price*.10f;
    return tax;
}
int main()
{
    float tax, price, total;
    string type_code;
    
    cout<<"enter type code";
    cin>>type_code;
    cout<<"enter price";
    cin>>price;
    
    tax=comp_tax(price, type_code);
    total=tax+price;
    
    cout<<"Your total is"<<total<<endl;
    cout<<"Type of car is"<<type_code<<endl;
    cout<<"Your price is "<<price<<endl;
    
    system("pause");
    return 0;
    
}