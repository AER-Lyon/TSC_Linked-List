# Cours sur les listes chainées en C

## **Définition :**

Une liste chainée est une structure de donnée dans laquelle chaque élément est stocké dans un noeud.<br>
Chaque noeud contient au minimum deux éléments :

1. La donnée: L'élément que vous souhaiter stocker (par exemple: un entier, une string, une structure, etc.).
2. Un pointeur vers le noeud suivant dans la liste: De cette façon, nous pouvons accéder à l'élément suivant uniquement à partir de celui actuel et ainsi de suite.<br>

Les noeuds sont reliées les uns aux autres pour former une liste. Nous pouvons imaginer ça comme des maillons ou alors un train, dont chaque wagon est un noeud.<br>
Une liste chainée commence par un noeud que l'on appele tête et se termine par noeud dont le pointeur est égal à `NULL`<br>

## **Avantages des listes chainées :**

Les listes chainées ont plusieurs avantages :
- **Taille dynamique :** Contrairement aux tableaux, les listes chainées peuvent changer de taille dynamiquement pendant l'éxécution du programme<br><br>
- **Insertion/Suppression efficace :** L'insertion et la suppresion d'un noeud au début ou au milieu sont plus efficaces que pour les tableaux.<br><br>
- **Utilisation efficace de la mémoire :** Les listes chainées peuvent changer de taille dynamiquement, elles ne gaspillent donc pas d'espace mémoire en resérvant de l'espace pour un nombre maximum d'éléments.<br><br>

## **Structure d'un noeud de liste chainée :**

En C, un noeud de liste chainée est défini comme une structure contenant la donnée et un pointeur vers le noeud suivant :<br>

```c
typedef struct linked_list
{
    char *data; // Donnée 
    struct linked_list *next; //Pointeur vers le noeud suivant
} linked_list_t;
```

## **Opérations courantes :**

### **1. Création d'une liste chainée :**

Pour créer une liste chainée, on doit allour de la mémoire pour chaque noeud à l'aide de la fonction `malloc` et relier les noeuds entre eux à l'aide de pointeurs.<br>
Exemple d'initialisation :

```c
linked_list_t *new_node = malloc(sizeof(linked_list_t))
new_node->data = "First node"
new_node->next = NULL;
```

## **2. Parcours de la liste :**

Pour parcourir une liste chainée, vous pouvez utiliser une boucle `while` pour suivre les pointeurs `next` de noeud en noeud jusqu'a atteindre la fin de la liste.<br>
Exemple :
```c
linked_list_t *current = head;
while (current->next != NULL) {
    // Actions (exemple: afficher la donnée)
    current = current->next
}
```

## **3. Insertion :**

Pour insérer un élément dans une liste chainée, on doit définir l'index auquel on veut insérer notre nouveau noeud. Cela peut-être au début, au mileu ou à la fin. Ensuite, on parcourt la liste jusqu'à arriver à l'endroit souhaité (index - 1). On crée un nouveau noeud. On définit sa data, et on met son suivant, au suivant du noeud actuel. Pour finir, on change le pointeur du suivant actuel par le pointeur de notre nouveau noeud.

## **4. Suppresion :**

Pour supprimer un noeud de la liste chainée, on se rend à l'endroit souhaité. On récupère le pointeur vers le suivant du suivant si il existe, et on le lie avec notre noeud actuel. C'est comme si on contournait le noeud souhaitant être supprimé en récupérant le lien vers celui d'après, depuis le noeud souhaitant être supprimé.


# **Exerices pratiques :**

Nous avons vu ici, les opérations courantes qui s'effectue sur une liste chainée. Nous allons donc les mettre en pratique en C.<br>
Vous pouvez téléchargé le zip de ce repo GitHub.<br>

Rendez vous dans le dossier **practice**. Vous trouvez dedans des exercices pour mettre en pratique les concepts. Voici l'ordre de réalisation :
- creation
- display
- free
- get_last_element
- add_element_at_end
- add_element_at
- remove_element_at
- reverse_list

**Pour chaque exercice :**

Rendez vous dans le dossier correspondant. Vous devez modifier le fichier .c du même nom (exemple: display -> **display/display.c**). Vous allez avoir des fichiers qui ressemblent à ça :

```c
/*
** EPITECH PROJECT, 2023
** Linked-List
** File description:
** creation
*/

#include "include/my.h"

void display_list(linked_list_t *first)
{
    linked_list_t *head = first; // Save a pointer to the head of the list
    // TODO: display all of the elements in the list
}
```

On voit donc ici une base de code, avec des instructions / indices vous permettant de le compléter.

Pour tester votre code, il vous suffit de faire :<br>
```bash
make test
```

Et vous aller pouvoir voir ce que votre code renvoie, et ce qui est attendu.
Exemple :
```bash
------------------------
Got :
------------------------
------------------------
Expected :
1
2
3
4
5
6
7
8
9
10
------------------------
FAILED
```

