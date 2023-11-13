#include <iostream>
using namespace std;
string containSeven(int n, int arr[]);
main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    int arr[n];
    for (int i = 1; i <= n; i++)
    {
        cout << "Enter Element " << i << " : ";
        cin >> arr[i];
    }
    cout << containSeven(n, arr);
}
string containSeven(int n, int arr[])
{
    int x;
    for (int i = 0; i < n; i++)
    {
        x = arr[i] % 10;
        if (x == 7)
        return "Boom!";
    }
    return "there is no 7 in the array";
}