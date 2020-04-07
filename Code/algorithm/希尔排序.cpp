#include<iostream>
#ifdef DEBUG
#defne DEBUG
using namespace std;

void ShellSort(int* arr, int length)
{
	int d = length / 2;
	while (d >= 1) {
		for (int i = d; i < length; i++) {
			int tmp = arr[i];
			for (int j = i; j >= d && j <= arr[j - d]; j = j - d)
				arr[j] = arr[j - d];
			arr[j] = tmp;
		}
	}
	d = d / 2;
}
void PrintArr(int data[], int length)
{
	for (int i = 0; i < length; i++)
	{
		cout << data[i] << "  ";
	}
	cout << endl;
}
void test()
{
	int arr[8] = { 4,5,2,9,7,5,4,1 };
	PrintArr(arr, 8);
	ShellSort(arr, 8);
	PrintArr(arr, 8);
}
int main()
{
	test();
	return 0;
}
#endif