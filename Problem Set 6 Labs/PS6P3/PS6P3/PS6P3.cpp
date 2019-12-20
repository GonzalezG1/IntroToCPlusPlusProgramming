//
//  main.cpp
//  PS6P3
//
//  Created by Guadalupe Gonzalez on 2/27/16.
//  Copyright © 2016 Guadalupe Gonzalez. All rights reserved.
//

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
float comp_avg(float exam1, float exam2)
{
    float avg, points;
    string status;
    
    avg=(exam1+exam2)/2;
    
    if (avg<=60)
     points=avg-60;
        status="passed";
    else
        avg=60-avg;
        status="failed";
    
    return avg;
}

int main()
{
    float avg, exam1, exam2, last_name;
    string status;
    
    //input
    cout<<"Enter Exam 1 score";
    cin>>exam1;
    cout<<"Enter Exam 2 score";
    cin>>exam2;
    cout<<"Enter Student's Last Name:";
    cin>>last_name;
    //process
    avg=comp_avg(exam1, exam2);
    
    
    //output
    
    
    if (avg<=60)
        cout<< "Passed"<<endl;
    else
        cout<<"Failed"<<endl;
    
    cout<<"Student's Last Name"<<last_name<<endl;
    cout<<"average"<<avg<<endl;
    
    system("pause");
    return 0;

    
}