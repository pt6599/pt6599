//wap to find one armstrong no. usinf c++ ?
//name =priyansu tiwari
//course=btech 3rd sem
#include<iostream>
  using namespace std;
   int main()
{
int n,r,temp,sum=0;
cout<<"enter no.";
    cin>>n;
    temp=n;
while(n>0)
{
r=n%10;
sum=sum+(r*r*r);
n=n/10;
}
if(temp==sum)
cout<<"armstrong no." ;
else
cout<<"not an armstrong no."<<endl;
return 0;   
 }
