//һ���������飬ԭ��ɾ���ظ����ֵ�Ԫ�أ�ʹ��ÿ��Ԫ�س���һ�Σ�
//�������Ƴ�������ĳ���
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
	printf("���鳤��Ϊ%d\n", ret);
	return 0;
}