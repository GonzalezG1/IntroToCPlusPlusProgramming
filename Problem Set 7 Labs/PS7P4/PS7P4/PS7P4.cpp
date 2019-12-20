//
//  main.cpp
//  PS7P4
//
//  Created by Guadalupe Gonzalez on 4/1/16.
//  Copyright © 2016 Guadalupe Gonzalez. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;
float comp_score(float exam_1, float exam_2)
{
    float score;
    
    score=exam_1*.60f+exam_2*.40f;
    return score;
    
}
float com_grade(float score)
{
    char grade;
    if (score>=90)
        grade='A';
    else if (score>=80)
        grade='B';
    else if (score>=70)
        grade='C';
    else if (score>=60)
        grade='D';
    else
        grade='F';
    
    return grade;
    
    
}

int main()
{
    float score, exam_1, exam_2;
    char grade;
    
    //input
    cout<<"Enter score of exam 1";
    cin>>exam_1;
    cout<<"Enter score of exam 2";
    cin>>exam_2;
    
    
    //process
    
    score=comp_score(exam_1, exam_2);
    grade=com_grade(score);
    
    //output
    
    cout<<"Your score is:" << score<<endl;
    cout<<"Your grade is"<< grade<<endl;
    
    
    system("pause");
    return 0;
    
    
}