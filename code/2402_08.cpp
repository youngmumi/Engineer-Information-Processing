#include <stdio.h>

int main() {
	char s[15] = "ADCDBCCAADBDBAB";
	char *a = "DB";
	char *b = "AD";

	int i, c, ac = 0, bc = 0;

	for (i = 0; i < 15; i++) {
		for (c = 0; c < 2; c++) {
			if (s[i + c] != a[c]) break;
		}
		if (c == 2) ac++;
		for (c = 0;c < 2;c++) {
			if (s[i + c] != b[c]) break;
		}
		if (c == 2)bc++;
	}
	printf("%d %d", ac, bc);
	return 0;
}
