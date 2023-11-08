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
    reverse_list(&list);
    display_list(list);
    return (0);
}