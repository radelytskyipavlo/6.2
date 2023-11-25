#include <iostream>
#include <cmath>
#include <time.h>

using namespace std;

int Max(int mas[], const int n);
int Min(int mas[], const int n);

int main()
{
	const int k = 10;
	int a[k];

	srand((unsigned)time(NULL));

	for (int i = 0; i < k; i++)
	{
		a[i] = 11 * rand() / RAND_MAX - 5;
		cout << a[i] << " ";
	}
	cout << endl;

	cout << "Min = " << Min(a, k) << endl;
	cout << "Max = " << Max(a, k) << endl;
	cout << "arithmetic mean = " << (Max(a, k) + Min(a, k)) / 2 << endl;

	return 0;
}

int Max(int mas[], const int n)
{
	int max = mas[0];
	for (int i = 1; i < n; i++)
		if (mas[i] > max)
			max = mas[i];
	return max;
}

int Min(int mas[], const int n)
{
	int min = mas[0];
	for (int i = 1; i < n; i++)
		if (mas[i] < min)
			min = mas[i];
	return min;
}