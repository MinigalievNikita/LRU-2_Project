#pragma once

#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

#include "List_for_hash.h"

struct HashTab {
    int page;
    int size;
    struct List **table;
};

struct Exist {
    short int True;
    int *value;
};

struct HashTab *create_hashtab( int size);

void free_hashtab(struct HashTab *hashtab);

int *get_value(struct HashTab *hashtab, int page);

void add_value(struct HashTab *hashtab, int page, int* value);

void del_value(struct HashTab *hashtab, int page);

void print_hashtab(struct HashTab *hashtab);

int hash_funk(int page, int size);
