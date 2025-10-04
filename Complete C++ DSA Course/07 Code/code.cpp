#include <iostream>
using namespace std;

int linearSearch(int arr[], int sz, int target)
{
    for (int i=0; i<sz; i++){
        if(arr[i] == target ){

            return i; // Found
        }
    }
        return -1; // Not Found
}

int main()
{
    int arr[] = {1, 4, 5, 12, 22, 8, 23};
    int sz = 7;
    int target = 8;

    cout << linearSearch(arr, sz, target) << endl;
    return 0;
}
