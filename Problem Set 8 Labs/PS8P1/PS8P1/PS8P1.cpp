//
//  main.cpp
//  PS8P1
//
//  Created by Guadalupe Gonzalez on 4/3/16.
//  Copyright © 2016 Guadalupe Gonzalez. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

float comp_m(float new_b)
{
    char m;
    if (new_b<0)
        m='overdrawn';
    else if (new_b<100)
        m='Warning. Close to overdran';
    else
        m='Have a nice day';
    
    return m;
    
}
int main()
{
    float new_b, amt_w, acct_b;
    
    string Lname;
    char m;
    
    //input
    cout<<"Enter Last name";
    cin>>Lname;
    cout<<"Enter account balance";
    cin>>acct_b;
    cout<<"Enter amount withdraw";
    cin>>amt_w;
    
    //process
    new_b=acct_b-amt_w;
    
    m=comp_m(new_b);
    
    //output
    
    cout<<"Your acct_b is  "<<new_b<<endl;
    cout<< "Message"<<m<<endl;
    
    system("pause");
    return 0;
    
    
}
