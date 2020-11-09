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

void ft_div_mod(int a, int b, int* div, int* mod) {
	*div = a / b;
	*mod = a % b;

}

int main()
{
	int a = 85;
	int b = 10;
	int div, mod;
	//ft_ft();
	//ft_ultimate_ft();
	//ft_swap(&a, &b);
	ft_div_mod(a, b, &div, &mod);
	printf("%d\n%d\n%d\n%d\n", a, b, div, mod); // p адрес а,  *p вывод числа 5
}