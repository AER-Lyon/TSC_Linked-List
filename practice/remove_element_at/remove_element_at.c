/*
** EPITECH PROJECT, 2023
** Linked-List
** File description:
** creation
*/

#include "include/my.h"

void remove_element_at(linked_list_t **begin, int index)
{
    linked_list_t *current = *begin;

    // TODO: So what happens if the list is empty?
    // TODO: So what happens if the index is 0?
    if (index == 0) {
        // If index is 0, remove the first element
    }
    for (int i = 0; /*We want to go at index - 1*/0 && /*Check if we can go to next*/1; i++) {
        // TODO: Go to the desired index
    }

    if (current == NULL) {
        // Handle the case where the index is out of bounds
    } else if (current->next == NULL) {
        // Handle the case where we want to remove the last element
    } else {
        // TODO: Remove the element
        // Obsiously, the element has been malloced, so ......
    }
}