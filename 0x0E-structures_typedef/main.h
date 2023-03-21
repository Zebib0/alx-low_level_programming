#ifndef MAIN_H
#define MAIN_H

#include<stdio.h>

void init_dog(struct dog *d, char *name, float age, char *owner);
void free_dog(dog_t *d);
dog_t *new_dog(char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
