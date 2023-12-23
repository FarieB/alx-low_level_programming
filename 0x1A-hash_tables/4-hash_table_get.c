#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
* hash_table_get - Retrieves a value associated with a key
* @ht: The hash table to look into
* @key: The key to search for
*
* Return: value associated with the key, or NULL if the key couldn't be found
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
unsigned long int index;
hash_node_t *temp;

if (ht == NULL || key == NULL || *key == '\0')
return (NULL);

/** Get the index where the key should be stored */
index = key_index((unsigned char *)key, ht->size);

/** Search for the key in the linked list at the index */
temp = ht->array[index];
while (temp != NULL)
{
if (strcmp(temp->key, key) == 0)
return (temp->value); /** Key found, return the associated value */
temp = temp->next;
}

return (NULL);
}

