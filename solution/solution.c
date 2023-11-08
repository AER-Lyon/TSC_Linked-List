/*
** EPITECH PROJECT, 2023
** sujet
** File description:
** main
*/

#include "include/my.h"

linked_list_t *create_linked_list(int ac, char *av[])
{
    linked_list_t *begin = malloc(sizeof(linked_list_t));
    begin->data = av[0];
    begin->next = NULL;
    linked_list_t *current = begin;

    for (int i = 1; i < ac; i++) {
        linked_list_t *new_node = malloc(sizeof(linked_list_t));
        new_node->data = av[i];
        new_node->next = NULL;
        current->next = new_node;
        current = new_node;
    }

    return begin;
}

void display_list(linked_list_t *first)
{
    while (first != NULL) {
        printf("%s\n", first->data);
        first = first->next;
    }
}

void free_list(linked_list_t *first)
{
    linked_list_t *tmp = first;
    while (first) {
        tmp = first->next;
        free(first);
        first = tmp;
    };
}

linked_list_t *get_last_element(linked_list_t *elem)
{
    while (elem->next) {
        elem = elem->next;
    }
    return elem;
}

void add_element_at_end(linked_list_t *elem, char *data)
{
    while (elem->next) {
        elem = elem->next;
    }

    elem->next = malloc(sizeof(linked_list_t));
    elem->next->data = data;
    elem->next->next = NULL;
}

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

// int main(int ac, char *av[])
// {
//     linked_list_t *first = create_linked_list(ac, av);

//     printf("Last : %s\n", get_last_element(first)->data);


//     linked_list_t **begin = &first;

//     reverse_list(begin);

//     display_list(first);
//     free_list(first);

//     return 0;
// }