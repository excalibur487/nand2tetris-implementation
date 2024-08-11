#include <stdio.h>

int main() {
	for (int i = 0; i < 16; i++) {
		printf("    Bit (in=in[%d], load=load, out=out[%d]);\n", i, i);
	}
}

