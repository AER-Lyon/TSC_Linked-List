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
    remove_element_at(&list, 0);
    remove_element_at(&list, 5);
    remove_element_at(&list, 100);
    remove_element_at(&list, 7);
    display_list(list);
    return (0);
}