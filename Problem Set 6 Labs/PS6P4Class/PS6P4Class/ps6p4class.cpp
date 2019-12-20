//
//  main.cpp
//  PS5P4Class
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
    float avg;
    avg=(exam1+exam2)/2;
    return avg;
}

float comp_status(float avg)
{
    string student_status;
    if (avg<=60)
        student_status="passed";
    else
        student_status="failed";
    
    return student_status;
    
}

float comp_points(float avg)
{
    float points;
    
    if (avg>=60)
        points=avg-60;
    else
        points=60-avg;
    return points;
    
}



int main()
{
    float last_name, exam1, exam2, avg, points;
    string student_status;
    
    //input
    
    cout<<"Enter Last Name";
    cin>>last_name;
    cout<<"Exam 1 score";
    cin>> exam1;
    cout<<"Exam 2 score";
    cin>> exam2;
    
    //process
    
    avg=comp_avg(exam1, exam2);
    student_status= comp_status(avg);
    points=comp_points(avg);
    
    //output
    
    cout<<"Studen't Last Name"<< last_name<<endl;
    cout<<"Average Score"<< avg<<endl;
    cout<<"Failed or Passed"<<student_status<<endl;
    cout<<"Points Needed to Pass if Falied or Points over if Passed"<<points<<endl;
    
    system("pause");
    
    return 0;
    
    
    

}