#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *left, *right;
};
void inorder(struct Node* root);
struct Node* newNode(int value);
struct Node* deleteNode(struct Node* root, int value);
struct Node* insert(struct Node* node, int value);

int main()
{
    struct Node* root = NULL;
    int i=1;
    for(i=1;i<=10;i++){
        root = insert(root,i);
    }
    printf("Originalno:\n ");
    inorder(root);
    printf("\n");
    root = deleteNode(root, 5);
    printf("Posle brisenje:\n");
    inorder(root);
    return 0;
}
struct Node* newNode(int value)
{
    struct Node* pom = (struct Node*)malloc(sizeof(struct Node));
    pom->data = value;
    pom->left = pom->right = NULL;
    return pom;
}

void inorder(struct Node* root)
{
    if (root != NULL) {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}
struct Node* insert(struct Node* node, int value)
{
    if (node == NULL)
        return newNode(value);
    if (value < node->data)
        node->left = insert(node->left, value);
    else
        node->right = insert(node->right, value);
    return node;
}
struct Node* deleteNode(struct Node* root, int value)
{
    if (root == NULL) // base
        return root;

    if (root->data > value) {
        root->left = deleteNode(root->left, value);
        return root;
    }
    else if (root->data < value) {
        root->right = deleteNode(root->right, value);
        return root;
    }
    // root e node koj treba da se izbrisi tuka
    if (root->left == NULL) { // ako levo e prazno
        struct Node* temp = root->right;
        free(root);
        return temp;
    }
    else if (root->right == NULL) { // ako desno e prazno
        struct Node* temp = root->left;
        free(root);
        return temp;
    }
    else {  // ako postojat dvete
        struct Node* succParent = root;
        struct Node* succ = root->right; // bara dete
        while (succ->left != NULL) {
            succParent = succ;
            succ = succ->left;
        }
        if (succParent != root) // pravime naslednik od levo vo desno
            succParent->left = succ->right;
        else
            succParent->right = succ->right; // ako nema naslednik na parent desno e succ->right;
        root->data = succ->data; // kopiraj data od dete vo root
        free(succ); // izbrisi dete i vrati root
        return root;
    }
}
