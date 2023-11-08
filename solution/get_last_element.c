/*
** EPITECH PROJECT, 2023
** TSC_Linked-List
** File description:
** get_last_element
*/

#include "include/my.h"

linked_list_t *get_last_element(linked_list_t *elem)
{
    while (elem->next) {
        elem = elem->next;
    }
    return elem;
}
