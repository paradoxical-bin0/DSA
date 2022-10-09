#include <iostream>
using namespace std;
void pattern(string s)
{
    int len = s.length();
    int temp = len;
    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < temp; j++)
        {
            cout << s[j];
        }
        temp--;
        cout << endl;
    }
}
int main()
{
    pattern("Geek*");
    return 0;
}