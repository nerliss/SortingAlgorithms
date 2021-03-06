#include <iostream>

using namespace std;

void swap(int* posX, int* posY)
{
    int temp = *posX;
    *posX = *posY;
    *posY = temp;
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ' ';
    }
    cout << endl;
}

int partition(int arr[], int left, int right)
{
    int pivot = arr[right]; // last element is a pivot
    int i = left - 1;

    for (int j = left; j <= right; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[right]);
    return (i + 1);
}

void quickSort(int arr[], int left, int right)
{
    if (left < right)
    {
        int partitionIndex = partition(arr, left, right);

        quickSort(arr, left, partitionIndex - 1);
        quickSort(arr, partitionIndex + 1, right);
    }
}

int main()
{
    int arr[] = { 12, -2, 0, 33, -29, 99, 35, -14 };
    int n = sizeof(arr) / sizeof(arr[0]);

    quickSort(arr, 0, n - 1);
    printArray(arr, n);

    return 0;
}