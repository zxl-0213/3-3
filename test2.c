//一个排序数组，原地删除重复出现的元素，使得每个元素出现一次，
//并返回移除后数组的长度
#include<stdio.h>
int del1(int* nums, int numsSize)
{
	int prev = 0;
	int cur = 1;
	int dest = 0;
	while (cur < numsSize)
	{
		if (nums[prev] == nums[cur])
		{
			prev++;
			cur++;
		}
		else
		{
			nums[dest] = nums[prev];
			dest++;
			prev++;
			cur++;
		}
	}
	if (prev == numsSize - 1)
	{
		nums[dest] = nums[prev];
		dest++;
	}
	return dest;
}
int main()
{
	int nums[] = { 1,2,3,3,4,5,6 };
	int ret = del1(nums, sizeof(nums)/sizeof(nums[0]));
	printf("数组长度为%d\n", ret);
	return 0;
}