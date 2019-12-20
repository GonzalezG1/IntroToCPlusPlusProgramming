//
//  main.cpp
//  PS6Problem1
//
//  Created by Guadalupe Gonzalez on 3/4/16.
//  Copyright © 2016 Guadalupe Gonzalez. All rights reserved.
//

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

float comp_tax(float item_amt, string non_profitcode)
{
    float tax;
    
    if (non_profitcode=="N")
        
        tax=0*item_amt;
    else
        tax=.07* item_amt;
    return tax;
}
int main()
{
    float item_amt, total;
    string non_profitcode;
    
    //input
    cout<<"Enter item amount";
    cin>>item_amt;
    cout<<"If you don't have a profit code enter N, if you do enter Y";
    cin>> non_profitcode;
    
    //process
    
    total=comp_tax(item_amt, non_profitcode) * item_amt+ item_amt;
    

    //output
    cout<<"the tax total is: "<< comp_tax(item_amt, non_profitcode) <<endl;
    cout<<"Item amount is    "<< item_amt<<endl;
    cout<<"Total is          "<< total <<endl;
    
    system("pause");
    return 0;
    
}