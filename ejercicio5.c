#include <stdio.h>

int main() {


	struct Articulo
	{
		char nombre[20];
		char descrip[100];
		float precio;

		
	};
	struct Articulo art;
	struct Articulo *ptr_art= &art;

	(*ptr_art).precio =50.38;
	ptr_art->precio = 50.38;

	printf("precio: %f", ptr_art -> precio );	

return 0;
}