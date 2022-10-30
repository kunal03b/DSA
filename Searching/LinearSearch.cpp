#include <stdio.h>

int search(int arr[], int size, int item)
{
	int i;
	for (i = 0; i < size; i++)
		if (arr[i] == item)
			return i;
	return -1;
}

int main(void)
{
	int arr[] = { 2, 3, 4, 10, 40 };
	int item = 10;
	int size = sizeof(arr) / sizeof(arr[0]);

	// Function call
	int result = search(arr, size, item);
	if (result == -1)
	{
		printf("Element is not present in array");
	}
	else
		 printf("Element is present at index %d", result);
	return 0;
}