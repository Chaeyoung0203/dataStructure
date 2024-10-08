#include <stdio.h>

int BSearch(int arr[], int len, int target)
{
	int first = 0;
	int last = len - 1;
	int mid;

	while(first <= last)
	{
		mid = (first + last) / 2;
		if (target == arr[mid])
			return mid;
		
		if (target < arr[mid])
			last = mid - 1;
		else
			first = mid + 1;
	}
	return -1;
}

int main(void)
{
	int arr[] = {1, 3, 5, 7, 9};
	int idx;

	idx = BSearch(arr, sizeof(arr)/sizeof(int), 9);
	if(idx == -1)
		printf("탐색 실패\n");
	else
		printf("target save idx: %d\n", idx);

	idx = BSearch(arr, sizeof(arr)/sizeof(int), 8);
	if(idx == -1)
		printf("탐색 실패\n");
	else
		printf("target save idx: %d\n", idx);

	return 0;
}