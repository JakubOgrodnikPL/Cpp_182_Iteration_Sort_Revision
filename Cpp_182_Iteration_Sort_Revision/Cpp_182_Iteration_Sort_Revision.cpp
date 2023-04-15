#include <iostream>
#include <vector>
using namespace std;

void recursiveInsertionSort(vector<int>& arr, int n)
{
	if (n <= 1) {
		return;
	}

	recursiveInsertionSort(arr, n - 1);
	int last = arr[n - 1];
	int j = n - 2;

	while (j >= 0 && arr[j] > last)
	{
		arr[j + 1] = arr[j];
		j--;
	}

	arr[j + 1] = last;
}

void printArray(vector<int>& arr, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

int main()
{
	vector<int> arr = { 12, 11, 13, 5, 6 };
	int n = arr.size();

	recursiveInsertionSort(arr, n);
	printArray(arr, n);

	return 0;
}
