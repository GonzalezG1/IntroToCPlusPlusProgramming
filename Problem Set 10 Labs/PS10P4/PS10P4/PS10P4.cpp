#include <iostream>
using namespace std;
int main()
{
float mark_v, a_value, total_n=0.0f, total_m=0.0f, total_a=0.0f;
cout<<"Market Value is, press ctl+z to stop";
cin>>mark_v;
    while(!cin.eof())
    {
        a_value=mark_v*.30;
        total_n=total_n+1;
        total_m=total_m+mark_v;
        total_a=total_a+a_value;
        cout<<"Market Value"<<mark_v<<endl;
        cout<<"Average Value is:"<<a_value<<endl;
        
        cout<<"Market Value is, press ctl+z to stop";
        cin>>mark_v;
    }
    
    cout<<"total number of users"<<total_n<<endl;
    cout<<"total sum of all market values"<<total_m<<endl;
    cout<<"total number of all assesed values"<<total_a<<endl;
    
    system("pause");
    return 0;

}
