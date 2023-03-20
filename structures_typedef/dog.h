#ifndef _dog_h_
#define _dog_h_

/**
 * struct dog - Save the params.
 * @name: First member.
 * @age: Second member.
 * @owner: Third member.
 */

/* -- Task 0 -- */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/* -- Task 1 -- */
void init_dog(struct dog *d, char *name, float age, char *owner);

/* -- Task 2 -- */
void print_dog(struct dog *d);

/* -- Task 3 -- */
typedef struct dog dog_t;

/* -- Task 4 -- */
dog_t *new_dog(char *name, float age, char *owner);

/* -- Task 5 -- */
void free_dog(dog_t *d);

#endif /* _dog_h_ */
