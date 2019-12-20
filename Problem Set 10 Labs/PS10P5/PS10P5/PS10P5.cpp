//
//  main.cpp
//  PS10P5
//
//  Created by Guadalupe Gonzalez on 4/23/16.
//  Copyright © 2016 Guadalupe Gonzalez. All rights reserved.
//

#include <iostream>
using namespace std;
float det_cost(float sqf, char code)
{
    float cost;
    if (code=='V')
        cost=sqf*25+2;
    else if(code=='L')
        cost=sqf*6+1;
    else if (code=='C')
        cost=sqf*4.50+2.50;
    else
        cost=sqf*3.5+1.50;
    return cost;
    
}
int main()
{
    float sqf, cost, total_c=0.0f, sum_of_c=0.0f;
    char code;
    
    cout<<"Enter # of square feet that you wish to cover & code, press ctl+z to stop";
    cin>>sqf>>code;
    
    while (!cin.eof())
    {
        cost=det_cost(sqf, code);
        total_c=total_c+1;
        sum_of_c=sum_of_c+cost;
        
        cout<<"cost of squared feet"<<cost<<endl;
        
    }
    cout<<"total cost"<<total_c<<endl;
    cout<<"sum of all cost"<<sum_of_c<<endl;
    system("pause");
    return 0;
    
}