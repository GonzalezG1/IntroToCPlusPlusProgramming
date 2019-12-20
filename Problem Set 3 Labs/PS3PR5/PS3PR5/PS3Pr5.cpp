//
//  main.cpp
//  PS3PR5
//
//  Created by Guadalupe Gonzalez on 2/12/16.
//  Copyright © 2016 Guadalupe Gonzalez. All rights reserved.
//

#include <iostream>
#include <iomanip>
using namespace std;
float compute_steps(float total_steps, float steps)
{
    float lb_lost;
    lb_lost=total_steps/steps;
    return lb_lost;
}
int main()
{
    float steps, total_steps,lb_lost;
    cout<<"Enter total steps";
    cin >>total_steps;
    //process phase
    steps=2500;
    lb_lost=compute_steps(steps, total_steps);
    //output
    cout<<"Total of lb lost" <<lb_lost<<endl;
    system("pause");
    return 0;
    
    
}