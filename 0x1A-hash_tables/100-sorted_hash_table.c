#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * shash_table_create - Creates a sorted hash table.
 * @size: The size of the array.
 *
 * Return: A pointer to the newly created sorted hash table.
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht;
	unsigned long int i;

	ht = malloc(sizeof(shash_table_t));
	if (ht == NULL)
		return (NULL);

	ht->size = size;
	ht->array = malloc(sizeof(shash_node_t *) * size);
	if (ht->array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		ht->array[i] = NULL;

	ht->shead = NULL;
	ht->stail = NULL;

	return (ht);
}

/**
 * shash_table_set - Adds an element to the sorted hash table.
 * @ht: The sorted hash table you want to add or update the key/value to.
 * @key: The key. key can not be an empty string.
 * @value: The value associated with the key. value must be duplicated.
 *         value can be an empty string.
 *
 * Return: 1 if it succeeded, 0 otherwise.
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	shash_node_t *new_node, *current_node, *prev_node;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	current_node = ht->array[index];

	while (current_node != NULL)
	{
		if (strcmp(current_node->key, key) == 0)
		{
			free(current_node->value);
			current_node->value = strdup(value);
			return (1);
		}
		current_node = current_node->next;
	}

	new_node = malloc(sizeof(shash_node_t));
	if (new_node == NULL)
		return (0);

	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (0);
	}

	new_node->value = strdup(value);
	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (0);
	}

	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	/* Insert into sorted linked list */
	prev_node = NULL;
	current_node = ht->shead;
	while (current_node != NULL && strcmp(current_node->key, key) < 0)
	{
		prev_node = current_node;
		current_node = current_node->snext;
	}

	new_node->sprev = prev_node;
	new_node->snext = current_node;

	if (prev_node != NULL)
		prev_node->snext = new_node;
	else
		ht->shead = new_node;

	if (current_node != NULL)
		current_node->sprev = new_node;
	else
		ht->stail = new_node;

	return (1);
}

/**
 * shash_table_get - Retrieves a value associated with a key.
 * @ht: The sorted hash table you want to look into.
 * @key: The key you are looking for.
 *
 * Return: The value associated with the element, or NULL if key couldn’t be found.
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *current_node;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	current_node = ht->array[index];

	while (current_node != NULL)
	{
		if (strcmp(current_node->key, key) == 0)
			return (current_node->value);
		current_node = current_node->next;
	}

	return (NULL);
}

/**
 * shash_table_print - Prints a sorted hash table.
 * @ht: The sorted hash table to print.
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *current_node;
	int first_pair = 1;

	if (ht == NULL)
		return;

	printf("{");
	current_node = ht->shead;
	while (current_node != NULL)
	{
		if (!first_pair)
			printf(", ");
		printf("'%s': '%s'", current_node->key, current_node->value);
		first_pair = 0;
		current_node = current_node->snext;
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - Prints a sorted hash table in reverse order.
 * @ht: The sorted hash table to print.
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *current_node;
	int first_pair = 1;

	if (ht == NULL)
		return;

	printf("{");
	current_node = ht->stail;
	while (current_node != NULL)
	{
		if (!first_pair)
			printf(", ");
		printf("'%s': '%s'", current_node->key, current_node->value);
		first_pair = 0;
		current_node = current_node->sprev;
	}
	printf("}\n");
}

/**
 * shash_table_delete - Deletes a sorted hash table.
 * @ht: The sorted hash table to delete.
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *current_node, *temp_node;

	if (ht == NULL)
		return;

	current_node = ht->shead;
	while (current_node != NULL)
	{
		temp_node = current_node->snext;
		free(current_node->key);
		free(current_node->value);
		free(current_node);
		current_node = temp_node;
	}

	free(ht->array);
	free(ht);
}
