0.	hash_table_t *hash_table_create(unsigned long int size);
		     function that creates a hash table.

1.	unsigned long int hash_djb2(const unsigned char *str);
		 hash function implementing the djb2 algorithm.

2.	unsigned long int key_index(const unsigned char *key, unsigned long int size);
		 function that gives you the index of a key.

3.	int hash_table_set(hash_table_t *ht, const char *key, const char *value);
	    	function that adds an element to the hash table.

4.	char *hash_table_get(const hash_table_t *ht, const char *key);
	     function that retrieves a value associated with a key.

5.	void hash_table_print(const hash_table_t *ht);
	     function that prints a hash table.

6.	void hash_table_delete(hash_table_t *ht);
	     function that deletes a hash table.