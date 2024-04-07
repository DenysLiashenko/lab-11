#include <iostream> 
#include <math.h> 
using namespace std;

int main()
{
	int n, m, i, k = 0;

	cout << "The length of array x: ";
	cin >> n;
	cout << endl << "The length of array y: ";
	cin >> m;

	int *x = new int[n];
	int *y = new int[m];

	cout << endl << "Enter " << n << " member of the array x: ";
	for (i = 0; i < n; i++)
	{
		cin >> x[i];
	}

	cout << endl << "Enter " << m << " member of the array y: ";
	for (i = 0; i < n; i++)
	{
		cin >> y[i];
	}

	for (i = 0; i < n; i++)
	{
		if (x[i] == y[0])
		{
			k++;
		}
	}
	cout << endl << "There are " << k << " elements '" << y[0] << "' in array x" << endl;
	
	delete x;
	delete y;
}