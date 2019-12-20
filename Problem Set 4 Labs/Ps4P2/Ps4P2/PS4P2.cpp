//
//  main.cpp
//  Ps4P2
//
//  Created by Guadalupe Gonzalez on 2/19/16.
//  Copyright © 2016 Guadalupe Gonzalez. All rights reserved.
//

#include <iostream>
#include<iomanip>
#include <string>
using namespace std;
float comp_score(float exam_1, float exam_2, float exam_3)
{
    float s;
    s=exam_1*.5+exam_2*.3+exam_3*.2;
    return s;
}
int main()
{
    float s, exam_1, exam_2, exam_3;
    
    cout<<"Enter Score of exam 1";
    cin>>exam_1;
    cout<< "Enter score of exam 2";
    cin>>exam_2;
    cout<< "Enter score of exam 3";
    cin>> exam_3;
    
    s=comp_score(exam_1, exam_2, exam_3);
    
    cout<<"Overall Score:"<< s << endl;
    
    system ("pause");
    return 0;
}