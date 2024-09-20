#include <iostream>
using namespace std;

class Sarray
{
private:
    int arr[5];
    int size = sizeof(arr) / sizeof(int);

public:
    Sarray()
    {
        cout << "Enter numbers in array elements: " << endl;
        for (int i = 0; i < size; i++)
        {
            cout << "at index " << i << endl;
            cin >> arr[i];
        }
    }
    void sortArr()
    {
        int mini;
        for (int i = 0; i <= (size - 2); i++)
        {
            mini = i;
            for (int j = i; j <= (size - 1); j++)
            {
                if (arr[j] < arr[mini])
                {
                    mini = j;
                }
            }
            int temp = arr[mini];
            arr[mini] = arr[i];
            arr[i] = temp;
        }
        cout << "Sorted Array: " << endl;
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
    }
    void findLargestElement()
    {
        int max = arr[0];
        for (int i = 1; i < size; i++)
        {
            if (max < arr[i])
            {
                max = arr[i];
            }
        }
        cout << "Largest Element of array: " << max << endl;
    }
    void searchValue(int val)
    {
        bool found = false;
        for (int i = 0; i < size; i++)
        {
            
            if (val == arr[i])
            {
                cout<<"This value is present in the array at index: "<<i<<endl;
                found = true;
            }
            if (found)
            {
                break;
            }
        }
        
    }
    ~Sarray() {}
};
int main()
{
    Sarray s1;
    s1.sortArr();
    cout<<endl;
    s1.findLargestElement();
    cout<<endl;
    s1.searchValue(34);
    return 0;
}