#include <stdio.h>

int int main()
{
	int v=18, w=21;
	const int *ptr =&v;
	ptr =&w;

	w=3;
	
	return 0;
}