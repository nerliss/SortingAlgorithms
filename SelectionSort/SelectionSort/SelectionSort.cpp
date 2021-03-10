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

void swap(int* posX, int* posY)
{
	int temp = *posX;
	*posX = *posY;
	*posY = temp;
}

void selectionSort(int arr[], int n)
{
	int minIndex;

	for (int i = 0; i < n - 1; i++)
	{
		minIndex = i;
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[minIndex])
			{
				minIndex = j;
			}
		}
		swap(&arr[minIndex], &arr[i]);
	}
}

int main()
{
	int arr[] = { -23, 0, 2, 13, 65, -36, 54 };
	int n = sizeof(arr) / sizeof(arr[0]);

	selectionSort(arr, n);
	printArray(arr, n);

	return 0;
}