//在一个数组中，删除值为val的数据，并返回数组长度
#include<stdio.h>
int del(int* nums, int numsSize,int val)
{
	int src = 0;
	int dest = 0;
	while (src < numsSize)
	{
		if (nums[src] != val)
		{
			nums[dest] = nums[src];
			src++;
			dest++;
		}
		else
			
			src++;
	}
	return dest;
}
int main()
{
	int nums[7] = {1,2,2,3,3,4,5};
	int ret = del(&nums,7,3);
	printf("数组长度为%d\n",ret);
	return 0;
}