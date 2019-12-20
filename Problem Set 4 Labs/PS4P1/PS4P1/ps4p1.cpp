//
//  main.cpp
//  PS4P1
//
//  Created by Guadalupe Gonzalez on 2/19/16.
//  Copyright © 2016 Guadalupe Gonzalez. All rights reserved.
//

#include <iostream>
#include<iomanip>
using namespace std;
float comp_ppl(float ann_sales_tg, float sales_per_sp)
{
    float sales_ppl_needed;
    sales_ppl_needed=ann_sales_tg/sales_per_sp;
    return sales_ppl_needed;

}
int main()
{
    float ann_sales_tg, sales_per_sp, sales_ppl_needed;
    //input phase
    cout<<"Enter annual sales target";
    cin>>ann_sales_tg;
    cout<<"Enter Sales per salesperson";
    cin>>sales_per_sp;
    //process phase
    sales_ppl_needed=comp_ppl(ann_sales_tg, sales_per_sp);
    //output phase
    cout << setprecision(2) << fixed;
    cout<<"Annual Sales Target is:"<<setw(8)<< ann_sales_tg<<endl;
    cout<<"Sales Per Person:" << setw(8)<< sales_per_sp<<endl;
    cout<<"Annual Sales People Needed" <<setw(8)<< sales_ppl_needed <<endl;
    
    system("pause");
    return 0;
    
}