/*
** EPITECH PROJECT, 2023
** TSC_Linked-List
** File description:
** free
*/

#include "include/my.h"

void free_list(linked_list_t *first)
{
    linked_list_t *tmp = first;
    while (first) {
        tmp = first->next;
        free(first);
        first = tmp;
    };
}
