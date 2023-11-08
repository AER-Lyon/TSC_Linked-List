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
    while (list != NULL) {
        printf("%s\n", list->data);
        list = list->next;
    }
}