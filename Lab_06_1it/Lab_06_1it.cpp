#include <iostream> 
#include <iomanip> 
#include <time.h> 

using namespace std;

void Generate(int* t, const int n, const int low, const int high)
{
	for (int i = 0; i < n; i++)
		t[i] = low + rand() % (high - low + 1);
}

void Display(int* t, const int n)
{
	for (int i = 0; i < n; i++)
		cout << t[i] << " ";
}

int Count(int* t, const int n)
{
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		if (t[i] > 0 && i % 4 != 0)
			count++;
	}
	return count;
}

int Sum(int* t, const int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		if (t[i] > 0 && i % 4 != 0)
			sum += t[i];
	}
	return sum;
}

void Replace(int* t, const int n)
{
	for (int i = 0; i < n; i++)
	{
		if (t[i] > 0 && i % 4 != 0)
		{
			t[i] = 0;
		}
		cout << t[i] << " ";
	}
}

int main()
{
	srand((unsigned)time(NULL));

	const int n = 20;
	int t[n];
	const int low = -14;
	const int high = 7;

	Generate(t, n, low, high);
	cout << "Generated array:" << endl;
	cout << "t[20] = { ";
	Display(t, n);
	cout << "}" << "\n";
	cout << "Number of matching elements: " << Count(t, n) << "\n";
	cout << "The sum of the matching elements: " << Sum(t, n) << endl << "\n";
	cout << "Replacing matching elements with 0: " << endl;
	cout << "t[20] = { ";
	Replace(t, n);
	cout << "}";
	cout << endl;

	system("pause");
	return 0;
}