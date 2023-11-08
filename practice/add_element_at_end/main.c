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
    add_element_at_end(list, "11");
    display_list(list);
    add_element_at_end(list, "12");
    display_list(list);
    return (0);
}