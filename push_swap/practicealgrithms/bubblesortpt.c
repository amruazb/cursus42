#include <stdio.h>

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void bubblesort(int arr[], int n)
{
	int i , j;
	i = 0;
	while(i < n - 1)
	{
		j = 0;
		while(j < n - i - 1)
		{
			if(arr[j] > arr[j + 1])
				swap(&arr[j], &arr[j+1]);
			j++;
		}
		i++;
	}
}

void bubblesortp(int *arr, int n)
{
	int *p1, *p2;

	p1 = arr;
	while(p1 < arr + n -1)
	{
		p2 = arr;
		while(p2 < arr + n - (p1 - arr) - 1)
		{
			if(*p2 > *(p2 + 1))
				swap(p2, p2 +1);
			p2++;
		}
		p1++;
	}
}

int main()
{
	int arr[] = {34,11,2,4,52,12,11,9,0};
	int n = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	bubblesortp(arr, n);
	while(i < n)
	{
		printf("%d ", arr[i++]);
	}
}

