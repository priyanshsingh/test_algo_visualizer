#include <iostream>
using namespace std;

int main()
{
    int i, n;

    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j + 1] < arr[j])
            {
                int temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << endl;
        }
        cout << endl;
    }
    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] <<endl;
    // }

    return 0;
}