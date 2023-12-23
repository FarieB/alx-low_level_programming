#include <stdio.h>
#include "hash_tables.h"

/**
* hash_table_print - Prints a hash table
* @ht: The hash table to print
*/
void hash_table_print(const hash_table_t *ht)
{
unsigned long int i;
int first = 1; /** Flag to check if it's the first key/value pair */

if (ht == NULL)
return;

printf("{");
for (i = 0; i < ht->size; i++)
{
hash_node_t *temp = ht->array[i];

while (temp != NULL)
{
if (!first)
printf(", "); /** Add comma and space if not the first pair */
printf("'%s': '%s'", temp->key, temp->value);
temp = temp->next;
first = 0;
}
}
printf("}\n");
}

