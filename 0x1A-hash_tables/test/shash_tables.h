#ifndef SHASH_TABLE
#define SHASH_TABLE

/**
* struct shash_node_s- Node of a sorted HashTable.
* @key: The key of the backet. The key is Unique in HashTable,
* if not result in update of old value with key to a new value.
* @value: The value of the backet
* @next: Pointer to the next backet.
* @snext: A pointer to the next element of the sorted linked list
* @sprev: A pointer to the previous element of sorted linked list
*/
typedef struct shash_node_s
{
	char *key;
	char *value;
	struct shash_node_s *next;
	struct shash_node_s *sprev;
	struct shash_node_s *snext;
} shash_node_t;

/**
* struct shash_table_s - Sorted HashTable data structure
* @size: The size of/element CAPACITY/ of the HashTable
* @array: An array of size@size
* Each CELL of this array is a pointer to the first node of a linked list,
* because we want our HashTable to use a Chainig collision handling
* @shead: A pointer to the first element of the sorted linked list
* @stail: A pointerr to the last element of the sorted linked list
*/
typedef struct shash_table_s
{
	unsigned long int size;
	shash_node_t **array;
	shash_node_t *shead;
	shash_node_t *stail;
} shash_table_t;
/**...........Sorted HashTable Functions...........*/
shash_table_t *shash_table_create(unsigned long int size);
int shash_table_set(shash_table_t *ht, const char *key, const char *value);
int store_backet(shash_table_t *ht, shash_node_t *backet,
		 unsigned long int hash_code);
void sort_backet(shash_table_t *ht, shash_node_t *backet);
void sort_many_backet(shash_table_t *ht, shash_node_t *backet);
char *shash_table_get(const shash_table_t *ht, const char *key);
void shash_table_print(const shash_table_t *ht);
void shash_table_print_rev(const shash_table_t *ht);
void shash_table_delete(shash_table_t *ht);
#endif /**SHASH_TABLE*/
