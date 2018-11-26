#include<iostream>
using namespace std;
unsigned int n;
unsigned int Day;
unsigned int Month;
unsigned int Year;

int main()
{
cout<<" Day = ";cin>>Day;
cout<<" Month = ";cin>>Month;
cout<<" Year = ";cin>>Year;
cout<<endl<<" (dd/mm//yy) = 1 ; (mm/dd/yy) =2 ";
int code;
cin>>code;
if (code==1) {
                     cout<<endl<<" French format "<<endl;
                     Day=Day<<27;
                     n=n|Day;
                     Month=Month<<23;
                     n=n|Month;
                     n<<n|Year;
                      cout<<n;
                    }
else
if (code==2)  {
                     cout<<endl<<" English format "<<endl;
                      Month=Month<<28;
                     n=n|Month;
                     Day=Day<<23;
                     n=n|Day;
                     n=n|Year;
                      cout<<n;
                    }
else
{ cout<<endl<<" Sorry , no banans today !"; }
return  0;
}


