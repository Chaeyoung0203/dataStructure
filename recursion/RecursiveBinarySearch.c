// 이진 탐색 알고리즘에 재귀함수 사용하기

#include <stdio.h>

int BSearchRecur(int arr[], int first, int last, int target)
{
  int mid;
  if(first >= last)
    return -1;
  mid = (first + last) / 2;

  if(arr[mid] == target)
    return mid;
  else if (target < arr[mid])
    return BSearchRecur(arr, first, mid-1, target);
  else
    return BSearchRecur(arr, mid+1, last, target);
}

int main(void)
{
  int arr[] = {1, 3, 5, 7, 9};
  int idx;

  idx = BSearchRecur(arr, 0, sizeof(arr)/sizeof(int)-1, 7);
  if(idx == -1)
    printf("탐색 실패\n");
  else
    printf("target idx: %d\n", idx);
  
  idx = BSearchRecur(arr, 0, sizeof(arr)/sizeof(int)-1, 4);
  if(idx == -1)
    printf("탐색 실패\n");
  else  
    printf("target idx: %d\n", idx);

  return 0;
}