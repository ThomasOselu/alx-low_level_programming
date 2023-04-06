#include "hash_tables.h"
#include <stdio.h>
/**
 * key_index- prints the key of an index
 * @key: The key to get the index of.
 * @size: The size of the array of the hash table.
 *
 * Return: the index of the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
