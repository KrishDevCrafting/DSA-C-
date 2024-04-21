

#include <iostream>
using namespace std;

int anybaseaddition(int num1, int num2, int base)
{
    int ans = 0;
    int carry = 0;
    int power = 1;

    while (num1 > 0 || num2 > 0 || carry != 0)
    {

        int ldn1 = num1 % 10;
        int ldn2 = num2 % 10;
        int sum = ldn1 + ldn2 + carry;

        carry = sum / base;
        int r = sum % base;
        ans = ans + (r * power);

        power = power * 10;

        num1 = num1 / 10;
        num2 = num2 / 10;
    }
    return ans;
}

int main()
{

    int ans = anybaseaddition(236, 127, 8);
    cout << ans << endl;

    return 0;
}

// anybase subtarction  when we subtraction the two value the browing value should be depend on browing..

// anybase multiplication
// array intro