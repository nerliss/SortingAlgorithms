#include <iostream>

using namespace std;

void printArray(int arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << ' ';
	}
	cout << endl;
}

void shellSort(int arr[], int n)
{
	for (int gap = n / 2; gap > 0; gap /= 2)
	{
		for (int i = gap; i < n; i++)
		{
			int temp = arr[i];
			int j;
			for (j = i; j >= gap && arr[j - gap] > temp; j -= gap)
			{
				arr[j] = arr[j - gap];
			}
			arr[j] = temp;
		}
	}
}

int main()
{
	int arr[] = { 10, 0, 23, -76, 9, -3, 28, -11 };
	int n = sizeof(arr) / sizeof(arr[0]);

	shellSort(arr, n);
	printArray(arr, n);

	return 0;
}