/*
** EPITECH PROJECT, 2023
** TSC_Linked-List
** File description:
** display
*/

#include "include/my.h"

void display_list(linked_list_t *first)
{
    linked_list_t *tmp = first;
    while (tmp != NULL) {
        printf("%s\n", tmp->data);
        tmp = tmp->next;
    }
}
