#include <stdio.h>

// generates hdl for chips with repetitive logic
int main() {
	long int a = 1234567890;
	long int b = 1000000000;
	for (int i = 0; i < 8; i++) {
		printf("    Or (a=Or0%li, b=in[%d], out=Or0%li);\n", a/b, i + 2, ((a*10)/b));
		b /= 10;

	}
}
