


#include<iostream>
#ifdef DEBUG

//#define DEBUG
using namespace std;
void swap(int* num1, int* num2)
{
	int tmp = *num1;
	*num1 = *num2;
	*num2 = tmp;
}
void BubbleSort(int* arr, int length)
{
	for (int i = length-1; i >0; i--)
	{
		for (int j = 0; j < i; j++)
		{
			if (arr[j] > arr[j + 1])swap(&arr[j], &arr[j + 1]);
		}
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
	int arr[8] = { 4,5,2,9,7,5,4,1 };
	PrintArr(arr, 8);
	BubbleSort(arr, 8);
	PrintArr(arr, 8);
}
int main()
{
	test();
	return 0;
}
#endif
