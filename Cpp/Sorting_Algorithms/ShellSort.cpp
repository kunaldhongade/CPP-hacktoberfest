#include  <iostream>
using namespace std;
int shellSort(int arr[], int n)
{
    for (int k = n/2; k > 0; k /= 2)
    {
        for (int i = k; i < n; i += 1)
        {
            int temp = arr[i];
            int j;           
            for (j = i; j >= k && arr[j - k] > temp; j -= k)
                arr[j] = arr[j - k];
            arr[j] = temp;
        }
    }
    return 0;
}
 
void printArray(int arr[], int n)
{
    for (int k=0; k<n; k++)
        cout << arr[k] << " ";
}
 
int main()
{   
    int arr[] = {13, 24, 19, 99, 89, 45, 35}, i;
    int n = sizeof(arr)/sizeof(arr[0]);
 
    cout << "Array before sorting: \n";
    printArray(arr, n);
 
    shellSort(arr, n);
 
    cout << "\nArray after sorting: \n";
    printArray(arr, n);
 
    return 0;
}
