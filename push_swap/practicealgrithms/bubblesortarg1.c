#include <stdio.h>

int ft_atoi(char *s)
{
	int num = 0;
	while(*s >= '0' && *s <= '9')
	{
		num = num * 10 + *s - '0';
		s++;
	}
	return num;
}


void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void bubblesort(int *arr, int n)
{
	int *p1, *p2;
	p1 = arr;
	while(p1 < arr + n - 1)
	{
		p2 = arr;
		while(p2 < arr + n  - (p1 - arr) - 1)
		{
			if(*p2 > *(p2 + 1))
				swap(p2, p2 + 1);
			p2++;
		}
		p1++;
	}
}

void bubblesort1(int arr[], int n)
{
	int i, j;
	i = 0;
	while(i < n - 1)
	{
		j = 0;
		while(j < n - i - 1)
		{
			if(arr[j] > arr[j + 1])
				swap(&arr[j] ,&arr[j + 1]);
			j++;
		}
		i++;
	}
}


int main(int ac, char **av)
{
	if( ac < 2)
	{
		printf("Usage: %s <num1> <num2> ... <num N>\n", av[0]);
		return 1;
	}

	int n = ac - 1;
	int arr[n];

	int i = 1;
	while(i <= n)
	{
		arr[i - 1] = ft_atoi(av[i]);
		i++;
	}

	printf("original array: \n");
	i = 0;
	while(i < n)
		printf("%d ", arr[i++]);
	bubblesort1(arr,n);
	printf("\nsorted array: \n");
	i = 0;
	while(i < n)
		printf("%d ", arr[i++]);
}



