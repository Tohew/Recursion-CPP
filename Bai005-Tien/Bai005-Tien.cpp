#include <iostream>
#include <limits>
#include <iomanip>

using namespace std;

float sum(int, int&);

int main()
{
    cout << "Problem 005 - To Vinh Tien - 22521474" << endl;
    int n;
    cout << "\nEnter the value of n:        ";
    cin >> n;
    int recursion_counter = 0;
    if (sum(n, recursion_counter) > FLT_MAX || recursion_counter > 3785)
    {
        cout << "\nStack overflow." << endl;
        return 0;
    }
    float s = sum(n, recursion_counter);
    cout << "\nThe result of S(" << n << ") is:      " << setw(5) << setprecision(5) << s << endl;
    return 0;
}

float sum(int n, int& recursion_counter)
{
    recursion_counter++;
    if (recursion_counter > 3785)
    {
        return FLT_MAX;
    }
    if (n == 0)
    {
        return 0;
    }
    return (sum(n - 1, recursion_counter) + (float)1 / (n * (n + 1)));
}
