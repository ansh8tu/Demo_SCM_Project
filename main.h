#include <iostream>
using namespace std;

int add(int x, int y);
int multiply(int x, int y);
int main()
{
    int num1; 
    int num2; 
    int sum_of_numbers;
    int product_of_numbers;
   
    cout << "Enter the first number" << endl;
    cin>>num1;
    cout << "Enter the second number" << endl;
    cin>>num2;
    sum_of_numbers=add(num1, num2);
    product_of_numbers=multiply(num1, num2);
    cout<<"sum of two numbers "<<sum_of_numbers<<endl;
    cout<<"product of two numbers"<<product_of_numbers<<end1;
    return 0;
}


int add(int x, int y)
{
    return (x+y);
}
int multiply(int x, int y)
{
	return (x*y);
}


