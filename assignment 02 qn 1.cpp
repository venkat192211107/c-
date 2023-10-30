#include <iostream>
using namespace std;
int main() 
{
    int age1 = 4200;
    int age2 = 8500;
    int age3 = 1000;
    int age4 = 1300;
    if (age1>age2&&age1>age3&&age1>age4) 
	{
      	cout << "The oldest painting is 4200 years old." << std::endl;
    } 
	else if(age2>age1&&age2>age3&&age2>age4) 
	{
    	cout << "The oldest painting is 8500 years old." << std::endl;
    } else if(age3>age1&&age3>age2&&age3>age4) 
	{
        cout << "The oldest painting is 100 years old." << std::endl;
    } else 
	{
        cout << "The oldest painting is 1300 years old." << std::endl;
    }
    return 0;
}
