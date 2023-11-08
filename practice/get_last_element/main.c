/*
** EPITECH PROJECT, 2023
** Linked-List
** File description:
** main
*/

#include "include/my.h"

int main(int argc, char *argv[])
{
    linked_list_t *list = create_linked_list(argc, argv);
    linked_list_t *last = get_last_element(list);
    if (last)
        printf("%s\n", get_last_element(list)->data);
    free_list(list);
    return (0);
}