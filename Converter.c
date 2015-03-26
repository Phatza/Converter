#include <stdio.h>
#include <stdlib.h>

//Convertisseur Euros ==> Francs

double conversion(double euros)
{
	return 6.55957 * euros;
}

int main(int argc, char const *argv[])
{
	double euros = 0;
	int again = 1;

	while (again == 1) // debut de la boucle while 'again'.
	{
	system("clear");
	printf("Hello, je suis un convertisseur Euro en Francs\n");
	printf("Entre un montant en Euro :\n");
	scanf("%lf", &euros);
	printf("%lf = %lf Francs =) =) =) =)\n", euros, conversion(euros)); // task done.
	printf("\nVoulez vous convertir à nouveau ? (1/0) \n");
	scanf("%d", &again);
	} // C'est la fin de ma boucle while 'again'.
	return 0;
}