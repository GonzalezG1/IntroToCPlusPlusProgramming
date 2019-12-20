//
//  main.cpp
//  ps2pr2
//
//  Created by Guadalupe Gonzalez on 2/5/16.
//  Copyright © 2016 Guadalupe Gonzalez. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
   
    float amt_meal;
    float tip_total;
    double tip_amt=.15;

    
//input phase
    cout <<"Enter total amount of meal. ";
    cin >> amt_meal;
    
    //process phase
    
    tip_total=amt_meal*tip_amt;
    
//output process
    cout <<"Total amount of tip" << tip_total;
    
    return 0;
}
