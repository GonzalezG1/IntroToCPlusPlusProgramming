//
//  main.cpp
//  PS10P6
//
//  Created by Guadalupe Gonzalez on 4/23/16.
//  Copyright © 2016 Guadalupe Gonzalez. All rights reserved.
//

#include <iostream>
using namespace std;
float det_fine(char code, float tickets)
{
    float fine;
    if (code=='s')
        fine=100.00f;
    else if (code=='c')
        fine=50.00f;
    else if (code=='r')
        fine=75.00f;
    else
        fine =50.000f;
    return fine;
    
    
}
int main()
{
    float fine, tickets, total_fines=0.0f, total_ppl=0.0f;
    char code;
    
    cout<<"Enter ticket number and code, press ctrl+z to stop";
    cin>>tickets>>code;
    
    while (!cin.eof())
    {
        fine=det_fine(code, tickets);
        total_fines=total_fines+fine;
        total_ppl=total_ppl+1;
        
        cout<<"The fine"<<fine<<endl;
        cout<<"Ticket number"<<tickets<<endl;
        cout<<"ticket code"<<code<<endl;
        
        cout<<"Enter ticket number and code, press ctrl+z to stop";
        cin>>tickets>>code;
        
    }
    cout<<"Sum of all fines"<<total_fines<<endl;

    cout<<"total # of users who entered data"<<total_ppl<<endl;
    system("pause");
    return 0;
    
    
}