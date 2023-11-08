/*
** EPITECH PROJECT, 2023
** TSC_Linked-List
** File description:
** display
*/

#include "include/my.h"

void display_list(linked_list_t *first)
{
    while (first != NULL) {
        printf("%s\n", first->data);
        first = first->next;
    }
}
