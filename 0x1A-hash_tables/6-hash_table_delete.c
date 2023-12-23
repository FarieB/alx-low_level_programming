#include <stdlib.h>
#include "hash_tables.h"

/**
* hash_table_delete - Deletes a hash table
* @ht: The hash table to delete
*/
void hash_table_delete(hash_table_t *ht)
{
unsigned long int i;
hash_node_t *temp, *next;

if (ht == NULL)
return;

/** Free each linked list in the array */
for (i = 0; i < ht->size; i++)
{
temp = ht->array[i];
while (temp != NULL)
{
next = temp->next;
free(temp->key);
free(temp->value);
free(temp);
temp = next;
}
}

/** Free the array and the hash table structure */
free(ht->array);
free(ht);
}

