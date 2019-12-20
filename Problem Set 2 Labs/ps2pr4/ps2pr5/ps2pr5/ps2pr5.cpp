//
//  main.cpp
//  ps2pr5
//
//  Created by Guadalupe Gonzalez on 2/5/16.
//  Copyright © 2016 Guadalupe Gonzalez. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    
    int words_per_min=60;
    int typical_page=90;
    float total_time;
    float number_of_pages;
    
    //input phase
    
    cout <<"Enter number of pages";
    cin >> number_of_pages;
    
    //process phase
    
    total_time=(number_of_pages*words_per_min)/typical_page;
    
    //output phase
    
    cout<< "Amount of time to type the pages " <<total_time<< endl;
    

    
    return 0;
}
