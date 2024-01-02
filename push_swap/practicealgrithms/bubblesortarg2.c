#include <stdio.h>

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void bubblesort(int *arr, int n)
{
	int i,j;
	i = 0;
	while(i < n - 1)
	{
		j = 0;
		while(j < n-i-1)
		{
			if(arr[j] > arr[j + 1])
				swap(&arr[j],&arr[j + 1]);
			j++;
		}
	i++;
	}
}

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

int main(int ac, char **av)
{
	if(ac < 2)
	{
		printf("Usage %s <num1> <num2> .... numN\n", av[0]);
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
	i = 0;
	printf("original string: ");
	while(i < n)
		printf("%d ",arr[i++]);
	bubblesort(arr,n);
	printf("sorted string: ");
	i = 0;
	while(i < n)
		printf("%d ", arr[i++]);
}

