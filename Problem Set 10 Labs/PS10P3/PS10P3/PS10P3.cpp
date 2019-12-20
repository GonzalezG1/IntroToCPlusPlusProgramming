
#include <iostream>
#include <string>
using namespace std;

int main()
{
    float salary, total_emp=0.0f, total_sal=0.0f, avg_sal, bonus;
    string l_name;
    
    cout<<"Enter Employers' last name and salary, press ctl+z to stop";
    cin>>l_name>>salary;
    
    while (!cin.eof())
    {
        bonus=salary*.10;
        total_emp=total_emp+1;
        total_sal=total_sal+salary;
        avg_sal=total_sal/total_emp;
        
        cout<<"Employer:"<<l_name<<endl;
        cout<<"Salary:"<<salary<<endl;
        cout<<"Bonus:"<<bonus<<endl;
        
        cout<<"Enter Employers' last name and salary, press clt+z to stop";
        cin>>l_name>>salary;
        
    }
    
    cout<<"total number of employers"<<total_emp<<endl;
    cout<<"total salaries"<<total_sal<<endl;
    
    system("pause");
    return 0;
   
    
}