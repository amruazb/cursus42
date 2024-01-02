#include <stdio.h>

void swap(int *a,int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}


/*void bubblesort(int arr[], int n)
{
	int i,j;
	i = 0;
	while(i < n-1)
	{
		j = 0;
		while(j < n-i-1)
		{
			if(arr[j] > arr[j + 1])
				swap(&arr[j], &arr[j+1]);
			j++;
		}
		i++;
	}
}*/


void bubblesort(int *arr, int n)
{
	int *p1, *p2;

	p1 = arr;
	while(p1 < arr + n - 1)
	{
		p2 = arr;
		while(p2 < arr + n - (p1 - arr) -1)
		{
			if(*p2 > *(p2 + 1))
				swap(p2, p2 + 1);
			p2++;
		}
		p1++;
	}
}


int main(int ac, char **av)
{
	int arr[] = {2,1,45,3,21,12,45,2,56,12,32};
	int n = sizeof(arr)/sizeof(arr[0]);

	bubblesort(arr,n);
	int i = 0;
	while(i < n)
	{
		printf("%d ", arr[i++]);
	}
}

