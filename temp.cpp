#include <iostream>
using namespace std;
int main()
{
    int arr[] = {5, 1, 9, 10, 4, 0};
    int N = 6;
    for (int i = 0; i < N - 1; i++)
    {
        for (int j = i + 1; j < N; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
    for (int i = 0; i < N; i++)
    {
        cout << " " << arr[i];
    }
    return 0;
}