// O(logn) 이진 탐색 알고리즘 연산 횟수 계산하기

#include <stdio.h>

int BSearch(int arr[], int len, int target)
{
	int first = 0;
	int last = len - 1;
	int mid;
	int opCount = 0;

	while(first <= last)
	{
		mid = (first+last) / 2;
		if(target == arr[mid])
			return mid;
		else
		{
			if(target < arr[mid])
				last = mid - 1;
			else
				first = mid + 1;
		}
		opCount++;
	}
	printf("비교연산 횟수: %d\n", opCount);
	return -1;
}

int main(void)
{
	int arr1[500] = {0, };
	int arr2[5000] = {0, };
	int arr3[50000] = {0, };
	int idx;

	idx = BSearch(arr1, sizeof(arr1)/sizeof(int), 1);
	if( idx == -1)
		printf("탐색 실패\n");
	else
		printf("target save index %d\n", idx);

	idx = BSearch(arr2, sizeof(arr2)/sizeof(int), 1);
	if( idx == -1)
		printf("탐색 실패\n");
	else
		printf("target save index %d\n", idx);

	idx = BSearch(arr3, sizeof(arr3)/sizeof(int), 1);
	if( idx == -1)
		printf("탐색 실패\n");
	else
		printf("target save index %d\n", idx);

	return 0;
}