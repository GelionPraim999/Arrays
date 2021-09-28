#include<iostream>
using namespace std;
//#define ARRAYS1
//#define ARRAYS2
#define SDVIG

void main()
{
	setlocale(LC_ALL, "ru");

#ifdef ARRAYS
	const int n = 5;
	int arr[n] = { 0,3,5,7,9};

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";

	}
	cout << endl;
#endif // ARRAYS

#ifdef ARRAYS2
	const int n = 10;
	int arr[n] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

	for (int i = 0; i < n; ++i)
	{
		cout << arr[i] << "\t";
	}
	cout << "\n";

	for (int i = n - 1; i >= 0; --i)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
#endif // ARRAYS2
#ifdef SDVIG
	const int n = 5;
	int arr[n] = { 1, 2, 3, 4, 5 };
	int t;
	t = arr[n - 1];

	for (int i = n - 2; i >= 0; --i)
	{
		arr[i + 1] = arr[i];  "\t";
	}
	arr[0] = t;

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
#endif // SDVIG

}