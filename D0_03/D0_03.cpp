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

void ft_div_mod(int a, int b, int* div, int* mod){
	*div = a / b;
	*mod = a % b;
}

void ft_ultimate_div_mod(int* a, int* b) {
	int div, mod;
	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

int main()
{
	int a = 98;
	int b = 3;
	//ft_ft();
	//ft_ultimate_ft();
	//ft_swap();
	//ft_div_mod();
	ft_ultimate_div_mod();
	printf("%d\n%d\n", a, b); 
}