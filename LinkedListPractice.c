#include <stdio.h>
#include <stdlib.h>

// The structure for a node
struct Node
{
    int data;
    struct Node *p_next_node;
};

void insert_at_beginning(struct Node *p_start, int data);
void print_nodes(struct Node *p_start);

int main()
{
    int array[] = {12, 56, 2, 11, 1, 90, 1000000000};
    int array_index;

    // Start with an empty linked list
    struct Node *p_start = NULL;

    for (array_index = 0; array_index < 6; array_index++)
        insert_at_beginning(&p_start, array[array_index]);

    printf("First Commit");

    return 0;
}

/***********************************************************************/
/*           Inserts a new node at the beginning of the list           */
/***********************************************************************/
void insert_at_beginning(struct Node *p_start, int data)
{
    struct Node *p_new_node = (struct Node *)malloc(sizeof(struct Node));
    p_new_node->data = data;
    p_new_node->p_next_node = p_start;
    p_start = p_new_node;
}

void print_nodes(struct Node *p_start)
{
    struct Node *temp_node = p_start;
    printf("\nThe contents of the list are: ");
    while (temp_node != NULL)
    {
        printf("%d", temp_node->data);
        temp_node = temp_node->p_next_node;
    }
}

void prueba()
{
    print("Hello");
}