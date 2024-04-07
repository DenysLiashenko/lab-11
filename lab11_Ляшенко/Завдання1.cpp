#include <iostream> 
#include <math.h> 
using namespace std;

int main()
{
	int a, b, *pa, *pb;
	
	cout << "Enter the value for a:";
	cin >> a;
	cout << endl;

	cout << "Enter the value for b:";
	cin >> b;
	cout << endl;

	pa = &a;
	pb = &b;

	*pa = *pa * 3;
	*pb = *pb / 3;

	cout << "a * 3 = " << *pa << endl;
	cout << "b / 3 = " << *pb << endl;
}