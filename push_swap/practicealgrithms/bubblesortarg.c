#include <stdio.h>

int ft_atoi(char *str)
{
	int num = 0;
	while(*str >= '0' && *str <= '9')
	{
		num = num * 10 + *str - '0';
		str++;
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
		while(p2 < arr + n - (p1 - arr) - 1)
		{
			if(*p2 > *(p2 + 1))
				swap(p2 , p2 + 1);
			p2++;
		}
		p1++;
	}
}

int main(int ac, char **av)
{
	if(ac < 2)
	{
		printf("Usage: %s <num1> <num2> .... <numN>\n", av[0]);
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
	bubblesort(arr,n);

	printf("\nsorted array: \n");
	i = 0;
	while(i < n)
		printf("%d ", arr[i++]);

}

