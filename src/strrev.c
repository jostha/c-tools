#include <string.h>
#include "strrev.h"

char *strrev(char *str) {
	int c;
	char ch;
	unsigned len = strlen(str) - 1;

	for (c = 0; c < len; c++, len--){
		ch = str[c];
		str[c] = str[len];
		str[len] = ch;
	}

	return str;
}
