#include <iostream>
using namespace std;

int add(int x, int y);
int substract(int x,int y);
int main()
{
    int number_1; 
    int number_2; 
    int sum_of_numbers;
    int diff_of_numbers;
   
    cout << "Enter the first number" << endl;
    cin>>number_1;
    cout << "Enter the second number" << endl;
    cin>>number_2;
    sum_of_numbers=add(number_1, number_2);
    diff_of_numbers=substract(number_1, number_2);
    cout<<"sum of two numbers "<<sum_of_numbers<<endl;
    return 0;
}


int add(int x, int y)
{
    return (x+y);
}
int substract(int x, int y)
{
	
	if (x>y)
	return (x-y);
	if (y>x)
	return (y-x);
}

