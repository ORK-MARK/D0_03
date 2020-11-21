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

void ft_putstr(char* str) {
	int h;
	for (h = 0; str[h] != 0; h++) {
		ft_putchar(str[h]);
	}
}

int ft_strlen(char* str) {
	int h;
	for (h = 0; str[h] != 0; h++);
	return h;
}

//int ft_factorial(int n) {
//	int i, m, b;
//	m = 1;
//	b = 2;
//
//	if (n < 0 || n > 12) return -1;
//
//	for (i = 2; i <= n; i++, b++) {
//		m *= b;
//	}
//	return m;
//}

char* ft_strrev(char* str) {

}

int main() {
	char arr[6] = "asdfg";
	//int a = ft_factorial(12);
	//ft_ft();
	//ft_ultimate_ft();
	//ft_swap();
	//ft_div_mod();
	//ft_ultimate_div_mod();
	//ft_putstr();
	//ft_strlen(arr);
	
	//printf("%d\n", a); 
}