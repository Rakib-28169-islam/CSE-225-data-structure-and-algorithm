#include <iostream>
using namespace std;
void BubbleSort(int arr[], int size)
{
    // best case O(n) for sorted array
    // avg case O(n^2) for random array
    // worst case O(n^2) for reverse sorted array

    for (int i = 0; i < size - 1; i++)//we have to run loop atleast n-1 times for ensuring all elements are sorted
    {
        for (int j = 0; j < size - i - 1; j++)//loop from 0 to n-i-1 because we dont recheck already sorted elements
        {
            if (arr[j] > arr[j + 1])//if current element is greater than next element then swap
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
int main()
{
    int size;//declaring size
    cout << "Enter the size of array: ";
    cin >> size;//initializing size
    int arr[size];//declaring array
    cout << "Enter the elements of array: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];//taking input
    }
    BubbleSort(arr, size);//calling function to sort
    cout << "Sorted array: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";//print sorted array
    }
    return 0;
}