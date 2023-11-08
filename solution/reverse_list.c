/*
** EPITECH PROJECT, 2023
** TSC_Linked-List
** File description:
** reverse_list
*/

#include "include/my.h"

void reverse_list(linked_list_t **begin)
{
    linked_list_t *prec = NULL;
    linked_list_t *cur = *begin;
    linked_list_t *next = cur->next;

    while (next) {
        cur->next = prec;
        prec = cur;
        cur = next;
        next = next->next;
    }

    cur->next = prec;

    *begin = cur;
}
