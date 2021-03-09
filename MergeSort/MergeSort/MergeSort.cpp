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

void merge(int *arr, int left, int right, int middle)
{
    int i, j, k, c[50];
    i = left;
    k = left;
    j = middle + 1;

    while (i <= middle && j <= right)
    {
        if (arr[i] < arr[j])
        {
            c[k] = arr[i];
            k++;
            i++;
        }
        else
        {
            c[k] = arr[j];
            k++;
            j++;
        }
    }
    while (i <= middle)
    {
        c[k] = arr[i];
        k++;
        i++;
    }
    while (j <= right)
    {
        c[k] = arr[j];
        k++;
        j++;
    }
    for (i = left; i < k; i++)
    {
        arr[i] = c[i];
    }
}

void mergeSort(int *arr, int left, int right)
{
    int middle;
    if (left < right)
    {
        middle = (left + right) / 2;
        mergeSort(arr, left, middle);
        mergeSort(arr, middle + 1, right);
        merge(arr, left, right, middle);
    }
    return;
}

int main()
{
    int arr[] = { 12, 20, -32, 0, -11, 16, -2 };
    int n = sizeof(arr) / sizeof(arr[0]);

    mergeSort(arr, 0, n);

    printArray(arr, n);

    return 0;
}