#include <iostream>
#include <cmath>
#include <time.h>

using namespace std;

int Max(int mas[], const int n, int i, int max);
int Min(int mas[], const int n, int i, int min);

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

	cout << "Min = " << Min(a, k, 1, a[0]) << endl;
	cout << "Max = " << Max(a, k, 1, a[0]) << endl;
	cout << "arithmetic mean = " << (Max(a, k, 1, a[0])
		+ Min(a, k, 1, a[0])) / 2 << endl;

	return 0;
}

int Max(int mas[], const int n, int i, int max)
{
	if (mas[i] > max)
		max = mas[i];
	if (i < n - 1)
		return Max(mas, n, i + 1, max);
	else
		return max;
}

int Min(int mas[], const int n, int i, int min)
{
	if (mas[i] < min)
		min = mas[i];
	if (i < n - 1)
		return Min(mas, n, i + 1, min);
	else
		return min;
}