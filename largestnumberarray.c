#include <stdio.h>
int getMax(int* arr, int size)
{
	int max = arr[0];
	for (int i = 1; i < size; i++)
    {
		if (max < arr[i])
		{
			max = arr[i];
		}
	}
	return max;
}
int main()
{
	int arr[10]= { 135, 165, 1, 16, 511, 65, 654, 654, 169, 4 };
	printf("Largest Number in the Array: %d",
		getMax(arr, 10));
	return 0;
}

