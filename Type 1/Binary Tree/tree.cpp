#include <iostream>
#include <malloc.h>
#include <stdio.h>

using namespace std;

typedef struct node Node;

struct node
{
    int data;
    Node *left;
    Node *right;
};

Node* create_node(int item)
{
    Node *new_node = (Node *) malloc(sizeof(Node));
    if(new_node == NULL)
    {
        cout << "Error! Couldn't create new node\n";
    }

    new_node->data = item;
    new_node->left = NULL;
    new_node->right = NULL;

    return new_node;
}

void add_left_child(Node *node,Node *child)
{
    node->left = child;
}
void add_right_child(Node *node,Node *child)
{
    node->right = child;
}

Node* create_tree()
{
    Node *root = create_node(2);
    Node *one = create_node(7);
    Node *two = create_node(9);

    add_left_child(root,one);
    add_right_child(root,two);

    Node *four = create_node(1);
    Node *five = create_node(6);

    add_left_child(one,four);
    add_right_child(one,five);

    Node *six = create_node(5);
    Node *seven = create_node(10);

    add_left_child(five,six);
    add_right_child(five,seven);

    Node *eight = create_node(8);
    add_right_child(two,eight);

    Node *nine = create_node(3);
    Node *ten = create_node(4);

    add_left_child(eight,nine);
    add_right_child(eight,ten);

    return root;
}

printPreOrder(Node* node)
{
    printf("%d ",node->data);

    if(node->left != NULL)
    {
        printPreOrder(node->left);
    }
    if(node->right != NULL)
    {
        printPreOrder(node->right);
    }


}

printPostOrder(Node* node)
{
    if(node->left != NULL)
    {
        printPostOrder(node->left);
    }

    if(node->right != NULL)
    {
        printPostOrder(node->right);
    }
    printf("%d ",node->data);

}

printInOrder(Node* node)
{
    if(node->left != NULL)
    {
        printInOrder(node->left);
    }

    printf("%d ",node->data);

    if(node->right != NULL)
    {
        printInOrder(node->right);
    }

}



int main()
{
    Node* root = create_tree();

    cout << "\nPre-Order traversal of binary tree is :\n" ;
    printPreOrder(root);

    cout << "\nPost-Order traversal of binary tree is :\n" ;
    printPostOrder(root);

    cout << "\nIn-Order traversal of binary tree is :\n" ;
    printInOrder(root);

}
