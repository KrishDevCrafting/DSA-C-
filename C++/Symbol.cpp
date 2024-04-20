#include <iostream>
using namespace std;

int main()
{
    int height = 5; // Height of the Z symbol

    for (int i = 0; i < height; i++)
    {
        if (i == 0 || i == height - 1)
        { // First and last rows
            for (int j = 0; j < height; j++)
            {
                cout << "*";
            }
        }
        else
        { // Middle rows
            for (int j = 0; j < height - i - 1; j++)
            {
                 cout << " ";
            }
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
