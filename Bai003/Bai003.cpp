#include <iostream>
using namespace std;

long long factorial(int);

int main()
{
	int k;
	cout << "Enter the value k: ";
	cin >> k;
	long long T = factorial(k);
	cout << "\nThe result is: " << T << endl;
	return 1;
}

long long factorial(int n)
{
	if (n == 0)
		return 1;
	int T = factorial(n - 1);
	return (T * n);
	//return factorial(n - 1) * n;
}