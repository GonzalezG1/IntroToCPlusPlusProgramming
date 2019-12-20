

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
float comp_tuiton(float cred_hr_taken, string residence)
{
    float total;
    if (residence=="I")
        total=250*cred_hr_taken;
    else
        total=500*cred_hr_taken;
    return total;
}

int main()

{
    float total, cred_hr_taken;
    string residence, last_name;
    //input
    cout<<"Enter Last Name";
    cin>>last_name;
    cout<<"Enter Residence (I or O)";
    cin>> residence;
    cout<<"Enter credit hours taken";
    cin>>cred_hr_taken;
    
    //process
    total=comp_tuiton(cred_hr_taken, residence);
    
    //output
    cout<<setprecision(2)<<fixed;
    cout<<"Student's Last Name:"<< setw(5)<<last_name<<endl;
    cout<<"Student's tuiton is $"<<setw(5)<<total<<endl;
    cout<<"Student's residence is"<<setw(5)<<residence<<endl;
    cout<<"student's credit hours taken:"<<setw(5)<<cred_hr_taken<<endl;
    
    system("pause");
    return 0;
    

}