#include <iostream>
using namespace std;

int main()
{
    int sum = 0;
    for (int i = 1; i < 50; i++)    
    {
        sum += i;
    }
    cout << "Sum of number " << sum << endl;
    return 0;
}