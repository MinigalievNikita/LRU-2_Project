#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <math.h>

#include "LRU/K_hash.h"

struct List {
    int page;
    int *value;
    struct List *next;
};


struct Exist {
    short int True;
    int *value;
};

void free_list(struct List **head);

void print_list(struct List *head);

void set_list(struct List **head, int page, int *value);

void del_in_list(struct List **head, int page);

struct Exist exist_in_list(struct List *head, int page);

