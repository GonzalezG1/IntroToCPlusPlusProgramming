//
//  main.cpp
//  ps5p5
//
//  Created by Guadalupe Gonzalez on 2/28/16.
//  Copyright © 2016 Guadalupe Gonzalez. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

float comp_charge(float yogurt_ounces, string coupon_code)
{
    float total;
    if (coupon_code=="x")
        total=yogurt_ounces*.20f;
    else
        total=yogurt_ounces*.25f;
    return total;
}
int main()
{
    float yogurt_ounces, total_charge;
    string coupon_code;
    
    //input
    
    cout<<"Enter Yogurt weight in ouces:";
    cin>>yogurt_ounces;
    cout<<"If you have a coupon enter x";
    cin>>coupon_code;
    
    total_charge= comp_charge(yogurt_ounces, coupon_code);
    
    cout<< "Your total charge is: " <<total_charge<<endl;
    cout<<"Yogurt Weight in ounces is: "<<yogurt_ounces<<endl;
    
    system("pause");
    return 0;
}