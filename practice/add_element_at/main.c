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
    add_element_at(&list, "11", 0);
    add_element_at(&list, "12", 5);
    add_element_at(&list, "13", 100);
    display_list(list);
    return (0);
}