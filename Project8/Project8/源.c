#include <stdio.h>
#include <stdlib.h>
int BinarySearch(int size, int tofind, int arr[] )
{
	int left = 0;
	int right = size - 1;
	while (left <= right)
	{
		int mid = (right - left) / 2;
		if (arr[mid] < tofind)
		{
			left = mid + 1;
		}
		else if (arr[mid]>tofind)
		{
			right = mid - 1;
		}
		else
		{
			return mid;
		}
	}return -1;
}
int main()
{
	int arr[5] = { 1, 2, 3, 4, 5 };
	int size = sizeof(arr) / sizeof(arr[0]);
	int ret = BinarySearch(size, arr, 4);
	printf("ret=%d\n", ret);
	system("pause");
	return 0;
}