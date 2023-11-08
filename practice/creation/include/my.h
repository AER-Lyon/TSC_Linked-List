/*
** EPITECH PROJECT, 2023
** Linked-List
** File description:
** my
*/

#ifndef MY_H_
#define MY_H_

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

typedef struct linked_list
{
    char *data;
    struct linked_list *next;
} linked_list_t;

linked_list_t *create_linked_list(int ac, char *av[]);
void display_list(linked_list_t *first);
void free_list(linked_list_t *first);
linked_list_t *get_last_element(linked_list_t *elem);
void add_element_at_end(linked_list_t *elem, char *data);
void add_element_at(linked_list_t **begin, char *data, int index);
void reverse_list(linked_list_t **begin);

#endif /* !MY_H_ */
