#include<iostream>
using namespace std;
class prince
{
public:
   int x;
   static int y;
void display()
{
    cout<<"x :"<<x<<endl;
    cout<<"y :"<<y<<endl;
}

};
int prince::y;
int main()
{
prince a1,a2;
   a1.x=10;
   a1.y=45;

   a2.x=40;
   a2.y=50;
a2.display();
a1.display();



return 0;
}
