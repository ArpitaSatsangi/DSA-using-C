#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int value;
    struct Node *left;
    struct Node *right;
    int height;
};

int getHeight(struct Node *n)
{
    if(n==NULL)
        return 0;
    return n->height;
}

struct Node *createNode(int value)
{
    struct Node* node = (struct Node *) malloc(sizeof(struct Node));
    node->value = value;
    node->left = NULL;
    node->right = NULL;
    node->height = 1;

    return node;
}

int max(int a, int b)
{
    return (a>b)?a:b;
}

int getBalanceFactor(struct Node * n)
{
    if(n==NULL)
        return 0;

    return getHeight(n->left) - getHeight(n->right);
}

struct Node* rightRotate(struct Node* y)
{
    struct Node* x = y->left;
    struct Node* T2 = x->right;

    x->right = y;
    y->left = T2;

    y->height = max(getHeight(y->right), getHeight(y->left)) + 1;
    x->height = max(getHeight(x->right), getHeight(x->left)) + 1;

    return x;
}

struct Node* leftRotate(struct Node* x)
{
    struct Node* y = x->right;
    struct Node* T2 = y->left;

    y->left = x;
    x->right = T2;

    x->height = 1 + max(getHeight(x->left), getHeight(x->right));
    y->height = 1 + max(getHeight(y->left), getHeight(y->right));

    return y;
}

struct Node *insert(struct Node* node, int value)
{
    if (node == NULL)
        return  createNode(value);

    if (value < node->value)
        node->left  = insert(node->left, value);
    else if (value > node->value)
        node->right = insert(node->right, value);

    node->height = 1 + max(getHeight(node->left), getHeight(node->right));
    int bf = getBalanceFactor(node);

    // Left Left Case
    if(bf>1 && value < node->left->value)
    {
        return rightRotate(node);
    }

    //Right Right Case
    if(bf<-1 && value > node->right->value)
    {
        return leftRotate(node);
    }

    // Left Right Case
    if(bf>1 && value > node->left->value)
    {
        node->left = leftRotate(node->left);
        return rightRotate(node);
    }

    // Right Left Case
    if(bf<-1 && value < node->right->value)
    {
        node->right = rightRotate(node->right);
        return leftRotate(node);
    }

    return node;
}

void preOrder(struct Node *root)
{
    if(root != NULL)
    {
        printf("%d ", root->value);
        preOrder(root->left);
        preOrder(root->right);
    }
}

int main()
{
    struct Node * root = NULL;
    int ch,ele;

    while(1)
    {
        printf("\n\n");
        printf("1. Insert Element\n");
        printf("2. PreOrder Display\n");
        printf("3. Exit\n");
        printf("Enter Your Choice: ");
        scanf("%d",&ch);

        if(ch==1)
        {
            printf("Enter Element: ");
            scanf("%d",&ele);

            root = insert(root,ele);
        }
        else if(ch==2)
        {
            preOrder(root);
        }
        else if(ch==3)
        {
            break;
        }
        else
        {
            printf("Wrong Input");
        }
    }

    return 0;
}
