#include <stdio.h>

/**
* main - Entry point
*
* Return: EXIT_SUCCESS on success, EXIT_FAILURE on failure
*/

int main(void)
{
hash_table_t *ht;
char *value;

/** Create a hash table with a size of 10 */
ht = hash_table_create(10);
if (ht == NULL)
{
fprintf(stderr, "Failed to create hash table\n");
return (EXIT_FAILURE);
}

/** Set key-value pairs in the hash table */
hash_table_set(ht, "name", "John");
hash_table_set(ht, "age", "25");
hash_table_set(ht, "city", "New York");

/** Print the hash table */
printf("Hash table after setting values:\n");
hash_table_print(ht);

/** Retrieve and print values based on keys */
value = hash_table_get(ht, "name");
printf("Value associated with key 'name': %s\n", value);

value = hash_table_get(ht, "age");
printf("Value associated with key 'age': %s\n", value);

value = hash_table_get(ht, "city");
printf("Value associated with key 'city': %s\n", value);

/** Delete the hash table */
hash_table_delete(ht);

return (EXIT_SUCCESS);
}

