#include <stdio.h>
#include "src/strrev.h"

int main(){
	char str[] = "If ifs and buts were candy and nuts, we'd all have a merry Christmas";
	strrev(str);
	printf ("%s \n", str);
	return 0;
}

