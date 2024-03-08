#ifndef Hash_Table
#define Hash_Table

#include <stdio.h>
#include <stdlib.h>

/**
 * struct hash_node_s - Node of a hash table/Item in the HASH_TABLE slot/bucket
 * @key: The key (string): of each item in the HASH_TABLE slot/bucket
 * The key is unique in the HASH_Table, but can have the same HASH_CODE
 * resulting in collision.
 *
 * @value: The value/data associated with each key in the HASH_TABLE slot
 * @next: A pointer to the next node of the list. Usually, there is a LIST with
 * one NODE across each slot of a HashTable, except in occurence of collision
 * where this pointer is used to make a chaine of LIST_Node.
 */
typedef struct hash_node_s
{
	char *key;
	char *value;
	struct hash_node_s *next;
} hash_node_t;
/**
 * struct hash_table_s - HashTable data structure
 * @size: The CAPACITY/Size of the HashTable or the array
 * @array: An array of size @size
 *
 * Each cell/slot/backet of this array is a pointer to the first node of linked
 * list, because we want our HashTable to use a CHAINING collision handling
 */
typedef struct hash_table_s
{
	unsigned long int size;
	hash_node_t **array;
} hash_table_t;

/*...................Hash Table functions...................*/
hash_table_t *hash_table_create(unsigned long int size);
unsigned long int hash_djb2(const unsigned char *str);
unsigned long int key_index(const unsigned char *key, unsigned long int size);
int hash_table_set(hash_table_t *ht, const char *key, const char *value);
int store_item(hash_table_t *, hash_node_t *, unsigned long int);

/**.............String Manipulation.........................*/
char *str_dup(const char *);
void _memcpy(char **, const char *, int);
int str_len(const char *);

#endif /** Hash_Table*/