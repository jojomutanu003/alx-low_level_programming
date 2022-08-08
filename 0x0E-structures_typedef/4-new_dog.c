#include "dog.h"

int _strlen(char *s);
char *_strcpy(char *dest, char *src);

/**
 *new_dog - a function that creates a new dog (variable) of
 *user defined type dog_t
 *@name: name of the new dog
 *@age: age of the new dog
 *@owner: owner of the created variable
 *
 *Return: pointer to the address of the new dog, NULL otherwise
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int len1, len2;

	len1 = _strlen(name);
	len2 = _strlen(owner);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	return (NULL);
	dog->name = malloc(sizeof(char) * (len1 + 1));
	if (dog->name == NULL)
	{
	free(dog);
	return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (len2 + 1));
	if (dog->owner == NULL)
	{
	free(dog);
	free(dog->name);
	return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;
	return (dog);
}

/**
 *_strlen - returns the length of a string
 *@s: string in question
 *Return: Length of a string in question
*/

int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
	i++;
	}
	return (i);
}

/**
 *_strcpy - copies the string pointed to by src
 *@src: the source string to be copies
 *@dest: the destination string to copy src to
 *
 *Return: pointer to destination
*/

char *_strcpy(char *dest, char *src)
{
	int len, i;
	len = 0;
	while (src[len] != '\0')
	{
	len++;
	}
	for (i = 0; i < len; i++)
	{
	dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
