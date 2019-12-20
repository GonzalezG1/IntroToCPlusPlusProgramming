//
//  main.cpp
//  ps2pr1
//
//  Created by Guadalupe Gonzalez on 2/5/16.
//  Copyright © 2016 Guadalupe Gonzalez. All rights reserved.
//

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{

float amt_gas;
float total_cost;
double gas_price=2.30;
    
cout << "Enter the amount of gasoline";
cin >> amt_gas;

//process phase
total_cost= amt_gas*gas_price;

//output phase

cout <<"Your total cost is " << total_cost<< endl;

system("pause");
    return 0;
    
    }




