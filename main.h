#include <iostream>
using namespace std;

int add(int x, int y);
<<<<<<< HEAD
int substract(int x,int y);
=======
int multiply(int x, int y);
>>>>>>> R171219005
int main()
{
    int number_1; 
    int number_2; 
    int sum_of_numbers;
<<<<<<< HEAD
    int diff_of_numbers;
=======
    int product_of_numbers;
>>>>>>> R171219005
   
    cout << "Enter the first number" << endl;
    cin>>number_1;
    cout << "Enter the second number" << endl;
    cin>>number_2;
    sum_of_numbers=add(number_1, number_2);
<<<<<<< HEAD
    diff_of_numbers=substract(number_1, number_2);
=======
    product_of_numbers=multiply(number_1, number_2);
>>>>>>> R171219005
    cout<<"sum of two numbers "<<sum_of_numbers<<endl;
    cout<<"product of two numbers"<<product_of_numbers<<end1;
    return 0;
}


int add(int x, int y)
{
    return (x+y);
}
<<<<<<< HEAD
int substract(int x, int y)
{
	
	if (x>y)
	return (x-y);
	if (y>x)
	return (y-x);
}
=======
int multiply(int x, int y)
{
	return (x*y);
}

>>>>>>> R171219005

