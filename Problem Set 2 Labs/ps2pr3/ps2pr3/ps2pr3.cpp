//
//  main.cpp
//  ps2pr3
//
//  Created by Guadalupe Gonzalez on 2/5/16.
//  Copyright © 2016 Guadalupe Gonzalez. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    float x_widgets;
    float total_hrs;
    double widget_per_hours=5;
    
    
//input phase
    cout<< "Enter numbers of widgets that have to be completed";
    cin >> x_widgets;
    
//process phase
    total_hrs=x_widgets/widget_per_hours;
    
//input phase
    cout << "It will take this amount of hours to complete it " <<total_hrs<< endl; 
    
    
    return 0;
}
