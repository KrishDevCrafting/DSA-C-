#include <iostream>
using namespace std;
int decimaltoanybase(int num, int b)
{

    int ans = 0;
    int power = 1;
    while (num > 0)
    {
        int r = num % b;

        num = num / b;
        ans = ans + (r * power);
        power = power * 10;
    }
    return ans;
}

int main()
{
    int ans = decimaltoanybase(144, 8);
    cout << ans << endl;

    return 0;
}
