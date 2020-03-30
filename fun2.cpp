#include<iostream>
using namespace std;
class  old
{
int a,b,c;
	public:
old()
{
cout<<"a general constructor";
}
old(int x,int y)
{
cout<<"parametrized constructor";
}
~old()
{

}
};
int main()
{
old obj;
old obj2(1,2)
	return 0;
}
