//
//  main.cpp
//  PS3PR4
//
//  Created by Guadalupe Gonzalez on 2/11/16.
//  Copyright © 2016 Guadalupe Gonzalez. All rights reserved.
//

#include <iostream>
#include<math.h>
#include<iomanip>
using namespace std;
float hypotenuse(float b, float h)
{
    float hy;
    hy=sqrt(b*b+h*h);
    return hy;
}
int main()
{
    float b, h, hy;
    cout <<"Enter base number";
    cin >>b;
    cout <<"Enter height number";
    cin >>h;
    
    hy=hypotenuse(b, h);
    
    cout<< "the hoptenuse is" <<hy<<endl;
    system("pause");
    return 0;
    
    
}