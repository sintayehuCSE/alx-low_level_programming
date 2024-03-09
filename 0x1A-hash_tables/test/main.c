#include "hash_tables.h"
int main()
{
	hash_table_t *ht;
	char *value;

	ht = hash_table_create(30);
	hash_table_set(ht, "Canada", "Ottawa");
	hash_table_set(ht, "Australia", "Canberra");

	value = hash_table_get(ht, "Canada");
	printf("%s:%s\n", "Canada", value);
	return (EXIT_SUCCESS);
}
