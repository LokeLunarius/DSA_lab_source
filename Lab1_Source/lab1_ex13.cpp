#include <iostream>
#include <algorithm>
using namespace std;


int buyCar(int* nums, int length, int k) {
	int max_count = 0;
	int* tmp_arr = new int[length];
	int larger_than_k = 0;
	for (int i = 0; i < length; i++)
	{
		tmp_arr[i] = nums[i];
		if (nums[i] > k)
		{
			larger_than_k++;
		}
	}
	if (&nums[0] == NULL)
	{
		return 0;
	}
	if (larger_than_k == length)
	{
		return max_count;
	}
	int tmp = 0;
	for (int i = 0; i < length; i++)
	{
		for (int j = 0; j < length - i - 1; j++)
		{
			if (tmp_arr[j] > tmp_arr[j + 1])
			{
				tmp = tmp_arr[j];
				tmp_arr[j] = tmp_arr[j + 1];
				tmp_arr[j + 1] = tmp;
			}
		}
	}
	int sum = tmp_arr[0];
	while (sum <= k)
	{
		max_count++;
		sum = sum + tmp_arr[max_count];
	}
	return max_count;
}

int main()
{
	int nums[] = { 50,90,180,300,52,46,285,78,42,966,135,545,858,47,124 };
	int length = sizeof(nums) / sizeof(nums[0]);
	cout << buyCar(nums, length, 10) << "\n";

}

