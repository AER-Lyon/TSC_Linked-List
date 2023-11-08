/*
** EPITECH PROJECT, 2023
** TSC_Linked-List
** File description:
** add_element_at_end
*/

#include "include/my.h"

void add_element_at_end(linked_list_t *elem, char *data)
{
    while (elem->next) {
        elem = elem->next;
    }

    elem->next = malloc(sizeof(linked_list_t));
    elem->next->data = data;
    elem->next->next = NULL;
}
