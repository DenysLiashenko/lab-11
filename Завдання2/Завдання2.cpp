#include <iostream> 
#include <math.h> 
using namespace std;

int main()
{
	int *p = new int;

	cout << "Enter the value for this part of mamory: ";
	cin >> *p;

	*p = *p * 2;

	cout << "(Your number) * 2 = " << *p << endl;

	delete p;
}