/*
** EPITECH PROJECT, 2023
** TSC_Linked-List
** File description:
** creation
*/

#include "include/my.h"

linked_list_t *create_linked_list(int ac, char *av[])
{
    linked_list_t *begin = malloc(sizeof(linked_list_t));
    begin->data = av[1];
    begin->next = NULL;
    linked_list_t *current = begin;

    for (int i = 2; i < ac; i++) {
        linked_list_t *new_node = malloc(sizeof(linked_list_t));
        new_node->data = av[i];
        new_node->next = NULL;
        current->next = new_node;
        current = new_node;
    }

    return begin;
}
