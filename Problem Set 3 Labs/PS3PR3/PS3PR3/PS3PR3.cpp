//
//  main.cpp
//  PS3PR3
//
//  Created by Guadalupe Gonzalez on 2/12/16.
//  Copyright © 2016 Guadalupe Gonzalez. All rights reserved.
//
#include <math.h>
#include <iostream>
#include <iomanip>
using namespace std;

float bat_stat(float hits_, float total_at_bats)
{
    float bat_avg;
    bat_avg=hits_/total_at_bats;
    return bat_avg;
}
int main()
{
    float hits_, total_at_bats, bat_avg;
    
    cout<<"Enter number of hits";
    cin>> hits_;
    cout<<"Enter number of total bad hits";
    cin >> total_at_bats;
    
    bat_avg=bat_stat(hits_,total_at_bats);
    
                     cout<<setprecision(2)<<fixed;
    cout<<"The average batting is:"<<setw(8)<<bat_avg<<endl;
    system("pause");
    return 0;
    
}