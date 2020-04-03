#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <vector>
//#include <algorithm>
#include <time.h>
using namespace std;
#if 0
int partition(int arr[], int left, int right)  //找基准数 划分
{
    int i = left + 1;
    int j = right;
    int temp = arr[left];
    int sss,t;

    while (i <= j)
    {
        while (arr[i] < temp)
        {
            i++;
        }
        while (arr[j] > temp)
        {
            j--;
        }
        if (i < j)
        {
            sss = arr[i];
            arr[i] = arr[j];
            arr[j] = sss;
           // swap(arr[i], arr[j]);
            //i++;
            //j--;
        }
            
        //else i++;
    }
    //swap(arr[j], arr[left]);

    sss = arr[j];
    arr[j] = arr[left];
    arr[left] = sss;

    return j;

}

void quick_sort(int arr[], int left, int right)
{
    if (left > right)
        return;
    int j = partition(arr, left, right);
    quick_sort(arr, left, j - 1);
    quick_sort(arr, j + 1, right);
}
void PrintArray(int array[], int len)
{
    for (int i = 0; i < len; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}

int main(void)
{
    const int NUM = 10;
    int array[NUM] = { 0 };
    srand((unsigned int)time(nullptr));
    for (int i = 0; i < NUM; i++)
    {
        array[i] = rand() % 100 + 1;
    }
    cout << "排序前：" << endl;
    PrintArray(array, NUM);
    cout << "排序后：" << endl;
    quick_sort(array, 0, NUM - 1);
    PrintArray(array, NUM);

    return 0;
}
#endif