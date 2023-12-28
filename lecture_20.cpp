#include <iostream>
using namespace std;
// Merge two different array:
void merge_sort(int arr2[], int n, int arr3[], int m, int arr4[])
{
    int i = 0;
    int j = 0;
    int k = 0; // Index of the sorted array.

    while (i < n && j < m)
    {
        if (arr2[i] < arr3[j])
        {
            arr4[k] = arr2[i];
            k++;
            i++;
        }
        else
        {
            arr4[k] = arr3[j];
            k++;
            j++;
        }
    }

    // if the arr2 elements are remaining:
    while (i < n)
    {
        arr4[k] = arr2[i];
        k++;
        i++;
    }

    // if the arr3 elements are remaining:
    while (j < m)
    {
        arr4[k] = arr3[j];
        k++;
        j++;
    }
}
// Reserved an array:
void reversed_array(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
// Printing array after sorted:
int printingArray(int arr[], int size)
{
    cout << "Printing the array after sorted " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Value of index " << i << " is: ";
        cout << arr[i] << endl;
    }
}
int main()
{
    /*int size1;
    cout << "Enter the size of an array: ";
    cin >> size1;

    int arr1[100];
    for (int i = 0; i < size1; i++)
    {
        cout << "Value of index " << i << " is: ";
        cin >> arr1[i];
    }
    reversed_array(arr1, size1);
    printingArray(arr1, size1);*/


    // Size of arr2:
    int n;
    cout << "Enter the size of n for array 1 is: ";
    cin >> n;
    // Size of arr3:
    int m;
    cout << "Enter the size of m for array 2 is:";
    cin >> m;

    int arr2[100]; // Creating arr2
    int arr3[100]; // Creating arr3
    int arr4[100]; // Creating arr4 to store the arr2 and arr3

    // Print the arr2:
    cout << "Print the arr2: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Value of index " << i << " is: ";
        cin >> arr2[i];
    }
    // Print the arr3:
    cout << "Print the arr3: " << endl;
    for (int i = 0; i < m; i++)
    {
        cout << "Value of index " << i << " is: ";
        cin >> arr3[i];
    }

    merge_sort(arr2, n, arr3, m, arr4);
    printingArray(arr4, n + m);
}