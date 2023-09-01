#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 *_strdup - returns a pointer which contains a copy of the str
 *@str: string
 *Return: strdup
 */
char *_strdup(char *str)
{
	char *strdup;
	int i, j;

	i = j = 0;
	if (str == NULL)
	{
		return (NULL);
	}
	while (str[j])
	{
		j++;
	}
	strdup = malloc((sizeof(char) * j + 1));
	if (strdup == NULL)
	{
		return (NULL);
	}
	while (str[i])
	{
		strdup[i] = str[i];
		i++;
	}
	strdup[i] = '\0';
	return (strdup);
}
/**
 *new_dog - function that creates a new dog
 *@name: name
 *@age: age
 *@owner: owner
 *Return: void
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *g = malloc(sizeof(dog_t));

	if (g == NULL)
	{
		return (NULL);
	}
	g->name = _strdup(name);
	g->age = age;
	g->owner = _strdup(owner);
	if (g->name == NULL)
	{
		free(g);
		return (NULL);
	}
	if (g->owner == NULL)
	{
		free(g->name);
		free(g);
		return (NULL);
	}
	return (g);
}
