#include <iostream>

using namespace std;

int main()
{
	const int n = 5;
	int a[n], i, p, k, min, loc, temp;

	cout << "\nSELECTION SORT\n\n";

	cout << "\nEnter elements: ";
	for (i = 1; i <= n; i++)
	{
		cin >> a[i];
	}

	for (p = 1; p <= n; p++)
	{
		min = a[p];
		loc = p;

		for (k = p + 1; k <= n; k++)
		{
			if (min > a[k])
			{
				min = a[k];
				loc = k;
			}
		}
		temp = a[p];
		a[p] = a[loc];
		a[loc] = temp;
	}

	cout << "\nSorted array: \n";

	for (i = 1; i <= n; i++)
	{
		cout << a[i] << ' ';
	}

	return 0;
}