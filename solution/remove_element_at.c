/*
** EPITECH PROJECT, 2023
** TSC_Linked-List
** File description:
** remove_element_at
*/

#include "include/my.h"

void remove_element_at(linked_list_t **begin, int index)
{
    linked_list_t *current = *begin;
    int i;

    if (*begin == NULL) {
        // Handle the case where the list is empty
        return;
    }
    if (index == 0) {
        // If index is 0, remove the first element
        linked_list_t *temp = *begin;
        *begin = (*begin)->next;
        free(temp);
        return;
    }
    for (i = 0; i < index - 1 && current != NULL; i++) {
        current = current->next;
    }

    if (current == NULL || current->next == NULL) {
        // Handle the case where the index is out of bounds
        return;
    }

    linked_list_t *temp = current->next;
    current->next = temp->next;
    free(temp);
}