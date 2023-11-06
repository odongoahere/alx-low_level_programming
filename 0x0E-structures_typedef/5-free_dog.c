/**
 * free_dog - Frees memory allocated for a struct dog.
 * @d: A pointer to a struct dog to free.
 *
 * This function takes a pointer to a struct dog as its argument and deallocates
 * the dynamically allocated memory used by its name and owner members, as well
 * as the memory allocated for the struct dog itself. It checks if the pointer 'd'
 * is not NULL before attempting to free the memory, preventing undefined behavior
 * if 'd' is already a NULL pointer. This function is typically used to clean up
 * and release resources associated with a dynamically allocated struct dog to
 * avoid memory leaks.
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}

