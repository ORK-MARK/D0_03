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

int main()
{
	int a = 5;
	//ft_ft();
	//ft_ultimate_ft();
	printf("%d\n", a); // p адрес а,  *p вывод числа 5
}