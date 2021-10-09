#include<iostream>
using namespace std;

class sample
{
  int m;
void read(void);
  public:
void display();
};
void sample::read(void)
{
cout<<"pvt access"<<endl;
}
void sample::display()
{
cout<<"pub access"<<endl;


read();
}
int main()
{
sample a1;
a1.display();
return 0;
}
