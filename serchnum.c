#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


int main()									//在有序数组中查找某个具体的数
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 7;

	int sz = ((sizeof(arr)) / sizeof(arr[0]));	//求数组中的元素个数
	int left = 0;
	int right = sz - 1;

	while (left<=right)							//二分查找
	{
		int mid = (left + right) / 2;

		if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else
		{
			printf("找到了该数为%d", arr[mid]);
			break;
		}
	}

	
	return 0;
}