# Linked List Data Structure

### A linked list is a linear data structure that includes a series of connected nodes. Here, each node stores the data and the address of the next node. For example:

    ### HEAD -> [DATA + NEXT] -> [DATA + NEXT] -> NULL

* ## Representation of a linked list: 
   ### We wrap both the data item and the next node reference in a struct as:
  ```c
        struct node {
            int data;
            struct node *next;
        }
  ```
### Each struct node has a data item and a pointer to another struct node. Let us create a simple Linked List with three items to understand how this works

```c
    //Initialize a node
    struct node *head;
    struct node *one=NULL;
    struct node *two=NULL;
    struct node *three=NULL;

    //allocate the size of the memory

    one=malloc(sizeof(struct node));
    two=malloc(sizeof(struct node));
    three=malloc(sizeof(struct node));

    //Assign values of the variable
    one->data= 1;
    two->data=2;
    three->data=3;

    //linking the nodes
    one->next=two;
    two->next=three;
    three->next=NULL;

    //saving the address of first node to head

    head=one;

```
