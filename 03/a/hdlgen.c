#include <stdio.h>

int main() {
	for (int i = 1; i < 9; i++) {
		printf("    Register (in=in, load=r%d, out=o%d);\n", i, i);
	}
}

