//
//  main.cpp
//  ps2pr4
//
//  Created by Guadalupe Gonzalez on 2/5/16.
//  Copyright © 2016 Guadalupe Gonzalez. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    float sales_amount;
    float sale_price;
    float sticker;
    float discount_per;
    
    //input phase
    cout<< "Enter Sticker Price";
    cin >> sticker;
    cout<< "Enter sale price";
    cin >> sale_price;
    
    //process phase
    sales_amount=sticker-sale_price;
    discount_per=sales_amount/sticker;
    
    //output process
    cout << "The sales amount is " <<sales_amount<< endl;
    cout << "the discount percentage is" << discount_per<< endl;
    system("pause");
    return 0;
    
}


