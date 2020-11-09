#include <io.h>
#include <stdio.h>

void ft_putchar(char b) {
	_write(1, &b, 1);
}

void ft_ft(int* nbr) {

	*nbr = 42;
}

void ft_ultimate_ft(int********* nbr) {
	*********nbr = 42;
}

void ft_swap(int* a, int* b) {
	int pb = *b;
	int pa = *a;
	*a = pb;
	*b = pa;
}

int main()
{
	int a = 5;
	int b = 1;
	//ft_ft();
	//ft_ultimate_ft();
	ft_swap(&a, &b);
	printf("%d %d\n", a, b); // p адрес а,  *p вывод числа 5
}