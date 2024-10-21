#include <stdio.h>
#include <stdlib.h>
/**
 * main - Point d'entrée principal du programme.
 *
 * Affiche la taille des types char, int, long int, long long int et float.
 *
 * Return: Retourne 0 si l'exécution s'est terminée avec succès.
 */
int main()
{
	printf("Size of a char: %lu byte(s)\n", sizeof(char));
	printf("Size of an int: %lu byte(s)\n", sizeof(int));
	printf("Size of a long int: %lu byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(long long int));
	printf("Size of a float: %lu byte(s)\n", sizeof(float));
	return 0;
}

