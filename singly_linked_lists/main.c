#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

// Fonction pour créer un nouveau nœud
list_t *create_node(char *str) {
    list_t *new_node = malloc(sizeof(list_t));
    if (new_node == NULL) {
        return NULL;
    }
    new_node->str = str ? strdup(str) : NULL;
    new_node->len = str ? strlen(str) : 0;
    new_node->next = NULL;
    return new_node;
}

// Fonction principale pour tester print_list
int main(void) {
    list_t *head = create_node("Hello");
    head->next = create_node("World");
    head->next->next = create_node(NULL);
    head->next->next->next = create_node("!");

    size_t nodes = print_list(head);
    printf("Number of nodes: %zu\n", nodes);

    // Libération de la mémoire
    list_t *current = head;
    list_t *next_node;
    while (current != NULL) {
        next_node = current->next;
        free(current->str);
        free(current);
        current = next_node;
    }

    return 0;
}
