#include<iostream>

using namespace std;

void InsertSort(int* arr, int length)
{
	int temp = 0;
	for (int i = 1; i < length; i++)
	{
		int j = i;
		while (arr[j-1] > arr[j])
		{
			temp = arr[j];
			arr[j] = arr[j - 1];
			arr[j - 1] = temp;
			j--;
		}
		//arr[j] = temp;
     }

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
	int arr[8] = { 4,5,2,9,7,5,11,1 };
	PrintArr(arr, 8);
	InsertSort(arr, 8);
	PrintArr(arr, 8);
}
int main()
{
	test();
	return 0;
}