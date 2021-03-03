#include <iostream>

using namespace std;

void swap(int* posX, int* posY)
{
	int temp = *posX;
	*posX = *posY;
	*posY = temp;
}

void printArray(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << ' ';
	}
	cout << endl;
}

void bubbleSort(int arr[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < n - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				swap(&arr[j], &arr[j+1]);
			}
		}
	}
}


int main()
{
	int arr[] = { 23, 43, 0, -12, 234, 10, -14 };
	int n = sizeof(arr) / sizeof(arr[0]);

	bubbleSort(arr, n);

	cout << "Bubble sorted array: \n";
	printArray(arr, n);

	return 0;
}
