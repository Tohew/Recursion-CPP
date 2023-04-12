#include <iostream>
using namespace std;

int sum(int);

int main()
{
	int k;
	cout << "Enter the value k: ";
	cin >> k;
	int s = sum(k);
	cout << "\nThe result is: " << s << endl;
	return 1;
}

int sum(int n)
{
	if (n == 0)
		return 0;
	int s = sum(n - 1);
	return (s + n);
	//return sum(n - 1) + n;
}