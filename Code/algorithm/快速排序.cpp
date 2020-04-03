#include<iostream>
using namespace std;
#if 1
void swap(int& a, int& b) {
	     int c = a;
	     a = b;
	     b = c;
	
}
int Partition(int data[], int left, int right)
{
	int start = left, end= right;
	int base = data[left];
	int temp ;
	while (start < end)
	{
		while (data[end] >= base && start < end)
		{
			end--;
		}
		while (data[start] <= base&&start<end)
		{
		start++;
		}
		
		
		
		if (start < end)
		{
			temp = data[start];
			data[start] = data[end];
			data[end] = temp;
			//end--;
			//start++;
		}
		//else
			//start++;
	}
	cout << start << " " << end<<endl;
	swap(data[end], data[left]);
	//temp =data[end];
	//data[end] = data[left];
	//data[left] = temp;
	return end;
}
void QuickSort(int data[],int left,int right)
{
	if (left >right)return;
	int index = Partition(data,left,right);
	QuickSort(data,left,index-1);
	QuickSort(data,index+1,right);
}
void PrintArr(int data[],int length)
{
	for (int i=0; i < length; i++)
	{
		cout << data[i]<<"  ";
	}
	cout << endl;
}
int main()
 
	int arr[10] = { 11 ,2,8,6,5,7,1,3,9 };
	PrintArr(arr,9);
	QuickSort(arr,0,8);
    PrintArr(arr,9);
	return 0;
}
#endif