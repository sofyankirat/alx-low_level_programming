script 1: Define a new type struct dog with the following elements:
name, type = char *
age, type = float
owner, type = char *
script 2: Write a function that initialize a variable of type struct dog
Prototype: void init_dog(struct dog *d, char *name, float age, char *owner);
script 3: Write a function that prints a struct dog
Prototype: void print_dog(struct dog *d);
Format: see example bellow
You are allowed to use the standard library
If an element of d is NULL, print (nil) instead of this element. (if name is NULL, print Name: (nil))
If d is NULL print nothing.
