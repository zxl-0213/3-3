//�Ǹ�����X��������ʽ���������ҵ�˳���γ����飬����x��������ʽA������x+k��������ʽ
#include<stdio.h>
#include<malloc.h>
#include<assert.h>
int* AddToArray(int* nums, int numsSize, int k,int* returnSize)
{
	int kSize = 0;
	int kum = k;
	int ret = 0;
	int nextnum = 0;
	int Ai = numsSize - 1;
	//���k���ַ�������С
	while (kum)
	{
		kSize++;
		kum /= 10;
	}
	int i = 0;
	int len = numsSize > kSize ? numsSize : kSize;
	int* Array = (int*)malloc(sizeof(int)*(len+1));//����һ����̬�ռ䡣
	assert(Array);
	while (len--)
	{
		int a = 0;
		if (Ai >= 0)
		{
			a = nums[Ai];
			Ai--;
		}
		else
			a = 0;
		ret = a + k % 10 + nextnum;
		k /= 10;
		
		if (ret > 9)
		{
			nextnum = 1;
			ret -= 10;
		}
		else
		{
			nextnum = 0;
		}
		Array[i] = ret;
		i++;
	}
	int left = 0;
	int right = i-1;
	while (left < right)
	{
		int temp = Array[left];
		Array[left] = Array[right];
		Array[right] = temp;
		left++;
		right--;
	}
	*returnSize = i;
	return Array;

}
void print(int* num, int size)
{
	int i = 0;
	while (i<size)
	{
		
		printf("%d", num[i]);
		i++;
	}
}
int main()
{
	int nums[] = {1,2,3,4};
	int k = 98;
	int size;
	int* num = AddToArray(nums,sizeof(nums)/sizeof(nums[0]),k,&size);
	print(num,size);
	return 0;
}