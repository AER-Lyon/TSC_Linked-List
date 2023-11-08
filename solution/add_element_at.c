/*
** EPITECH PROJECT, 2023
** TSC_Linked-List
** File description:
** add_element_at
*/

#include "include/my.h"

void add_element_at(linked_list_t **begin, char *data, int index)
{
    linked_list_t *elem = *begin;
    while (index > 1) {
        elem = elem->next;
        index--;
    }
    linked_list_t *next = elem->next;
    linked_list_t *new = malloc(sizeof(linked_list_t));
    new->data = data;

    if (index > 0) {
        new->next = next;
        elem->next = new;
    } else {
        next = elem;
        new->next = next;
        *begin = new;
    }
}
