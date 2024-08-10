#include <stdio.h>

int main() {
	for (int i = 0; i < 16; i++) {
		printf("    FullAdder (a=a[%d], b=b[%d], c=a%dAddb%d, sum=out[%d], out=a%dAddb%d);\n", i, i, i-1, i-1, i, i, i);
	}
}
