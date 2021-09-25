//write a program calculTE FACTORIAL of a number using a func. fact?
//to calculate the area of squre , rectengle , circle using over loading?
//to use the string func.?
//name=Priyansu Tiwari
//sec=M
//ID no.=210111123
#include<iostream>

using namespace std;

int factorial(int n)
{
	if (n<=1)
	{
	return 1;
	}
	return n*factorial(n-1);
}
int main()
	{
	int a;
 	cout<<"enter the no."<<endl;
 	cin>>a;
 	cout<<"factorial of"<<a<<"is:"<<factorial(a)<<endl;
	return 0;
	}  
