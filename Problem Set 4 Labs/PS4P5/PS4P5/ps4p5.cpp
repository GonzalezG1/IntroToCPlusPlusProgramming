//
//  main.cpp
//  PS4P5
//
//  Created by Guadalupe Gonzalez on 2/19/16.
//  Copyright © 2016 Guadalupe Gonzalez. All rights reserved.
//

#include <iostream>
using namespace std;
float compt_cred(float cred_needed, float cred_taken)
{
    float cred_rem;
    cred_rem=cred_needed-cred_taken;
    return cred_rem;
    
}

int main()
{
    float cred_needed, cred_taken, cred_rem;
   //input
    cout<<"Enter amount of credits needed";
    cin>>cred_needed;
    cout<< "enter amount of credits taken";
    cin>> cred_taken;
    //process
    cred_rem=compt_cred(cred_needed, cred_taken);
    //output
    cred_rem= compt_cred(cred_needed,cred_taken);
    //output
    cout<<"Amount of credits that you will need to take:"<< cred_rem<<endl;
    
    system("pause");
    return 0;
    
    
    
}

