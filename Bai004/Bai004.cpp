#include <iostream>
using namespace std;

float power(float, int);

int main()
{
	int k;
	float x;
	cout << "Enter the value k: ";
	cin >> k;
	cout << "Enter the value x: ";
	cin >> x;
	float T = power(x, k);
	cout << "\nThe result is: " << T << endl;
	return 1;
}

float power(float x, int n)
{
	if (n == 0)
		return 1;
	float T = power(x, n - 1);
	return (T * x);
	//return power(x, n - 1) * x;
}