#include<stdio.h>
#include<stdlib.h>

struct btnode
{
    int value;
    struct btnode *right;
    struct btnode *left;
};

typedef struct btnode node;
node *root=NULL;

void preorder(node *);
void postorder(node *);
void inorder(node *);
node *create();
node* min(node *);
node* max(node *);
node* search(node*, int);
void bfs(node *);
void insert(node *root,node *temp);
void destroyed(node *);
node* deleteNode(node* root, int key);
int height(node *root);
int mx(int l,int r);


struct node_queue
{
    node *ele;
    struct node_queue *next;
};
typedef struct node_queue queue;

void levelOrderR(node *root);
void levelOrderQ(node *root);
void enqueue(node *newnode);
node * dequeue();
int isQueueEmpty();
queue *front=NULL,*rear=NULL;


void main()
{
    int ch,ele;
    node *tempnode;
    while(1)
    {
        printf("\n1. Insert");
        printf("\n2. Delete");
        printf("\n3. Inorder");
        printf("\n4. Preorder");
        printf("\n5. Postorder");
        printf("\n6. Search");
        printf("\n7. Max");
        printf("\n8. Min");
        printf("\n9. BFS Traversal");
        printf("\n10. Destroyed BST");
        printf("\n11. Height of BST");
        printf("\n12. Level Order Traversal (Queue)");
        printf("\n13. Level Order Traversal (Recursion)");
        printf("\n14. Exit");
        printf("\nEnter your choice : ");
        scanf("%d",&ch);
        switch (ch)
        {
            case 1:
            {
                node *newnode;
                newnode=create();
                if(root==NULL)
                {
                    root=newnode;
                }
                else
                {
                    insert(root,newnode);
                }
                break;
            }
            case 2:
            {
                printf("\nEnter Element : ");
                scanf("%d",&ele);
                root=deleteNode(root,ele);
                break;
            }
            case 3:
            {
                inorder(root);
                break;
            }
            case 4:
            {
                preorder(root);
                break;
            }
            case 5:
            {
                postorder(root);
                break;
            }
            case 6:
            {
                printf("\nEnter Element : ");
                scanf("%d",&ele);
                tempnode=search(root,ele);
                if(tempnode==NULL)
                {
                    printf("\nElement Not Exist..!\n");
                }
                else
                {
                    printf("\nElement Exist in Tree : %d",tempnode->value);
                }
                break;
            }
            case 7:
            {
                tempnode=max(root);
                printf("\nMax Element : %d",tempnode->value);
                break;
            }
            case 8:
            {
                tempnode=min(root);
                printf("\nMin Element : %d",tempnode->value);
                break;
            }
            case 9:
            {
                bfs(root);
                break;
            }
            case 10:
            {
                destroyed(root);
                break;
            }
            case 11:
            {
                printf("\nHeight of BST : %d",height(root));
                break;
            }
            case 12:
            {
                levelOrderQ(root);
                break;
            }
            case 13:
            {

                break;
            }
            case 14:
            {
                exit(0);
            }
            default:
            {
                printf("Wrong choice, Please enter correct choice  ");
            }
        }
    }
}

node * create()
{
    node *ptr;
    ptr= (node *)malloc(sizeof(node));
    printf("Enter data of node to be inserted : ");
    scanf("%d",&ptr->value);
    ptr->left = ptr->right = NULL;
    return ptr;
}


void insert(node *root,node *temp)
{
    if(temp->value > root->value)
    {
        if(root->right == NULL)
        {
            root->right=temp;
        }
        else
        {
            insert(root->right,temp);
        }
    }
    else
    {
        if(root->left == NULL)
        {
            root->left=temp;
        }
        else
        {
            insert(root->left,temp);
        }
    }
}

void inorder(node *root)
{
    if(root!=NULL)
    {
        inorder(root->left);
        printf("%d ",root->value);
        inorder(root->right);
    }
}

void preorder(node *root)
{
    if(root!=NULL)
    {
        printf("%d ",root->value);
        preorder(root->left);
        preorder(root->right);
    }
}

void postorder(node *root)
{
    if(root!=NULL)
    {
        postorder(root->left);
        postorder(root->right);
        printf("%d ",root->value);
    }
}

node* min(node *root)
{
    if(root->left == NULL)
    {
        return root;
    }
    else
    {
        min(root->left);
    }
}

node* max(node *root)
{
    if(root->right== NULL)
    {
        return root;
    }
    else
    {
        max(root->right);
    }
}

node* search(node* root, int key)
{
    if(root == NULL || root->value == key)
    {
        return root;
    }
    if(root->value < key)
    {
        return search(root->right, key);
    }
    else
    {
        return search(root->left, key);
    }
}

/* Given a binary search tree and a key, this function deletes the key
   and returns the new root */
node* deleteNode(node* root, int key)
{
    if (root == NULL)
        return root;

    if (key < root->value)
    {
        root->left = deleteNode(root->left, key);
    }
    else if (key > root->value)
    {
        root->right = deleteNode(root->right, key);
    }
    else
    {
        // node with only one child or no child
        if (root->left == NULL)
        {
            node *temp = root->right;
            free(root);
            return temp;
        }
        else if (root->right == NULL)
        {
            node *temp = root->left;
            free(root);
            return temp;
        }

        // node with two children: Get the inorder successor (smallest in the right subtree)
        node* temp = min(root->right);

        // Copy the inorder successor's content to this node
        root->value = temp->value;

        // Delete the inorder successor
        root->right = deleteNode(root->right, temp->value);
    }
    return root;
}

void bfs(node *root)
{
  node *queue[100] ={(node *)0};
  int size=0,qp= 0;
  while(root)
  {
      printf("%d ", root->value);
      if(root->left)
      {
            queue[size++] = root->left;
      }
      if(root->right)
      {
        queue[size++] = root->right;
      }
      root = queue[qp++];
  }
}

//Level Order Using Recursion
void levelOrderR(node *root)
{

}

//Level Order Using Queue
void levelOrderQ(node *root)
{
    if(root==NULL)
        return;

    enqueue(root);

    while(!isQueueEmpty())
    {
        node *ele = dequeue();
        printf("%d ",ele->value);

        if(ele->left!=NULL)
        {
            enqueue(ele->left);
        }
        if(ele->right!=NULL)
        {
            enqueue(ele->right);
        }
    }
}

void enqueue(node *newnode)
{
    queue *ptr;
    ptr=(queue *)malloc(sizeof(queue));
    ptr->ele=newnode;
    ptr->next=NULL;

    if(front==NULL)
    {
        front=ptr;
        rear=ptr;
    }
    else
    {
        rear->next=ptr;
        rear=ptr;
    }
}

node * dequeue()
{
    node *ptr;

    if(front==NULL)
    {
        printf("Queue is Underflow");
        return NULL;
    }
    else if(front==rear)
    {
        ptr = front->ele;

        front=NULL;
        rear=NULL;
    }
    else
    {
        ptr = front->ele;
        front = front->next;
    }

    return ptr;
}

int isQueueEmpty()
{
    if(front==NULL)
        return 1;
    else
        return 0;
}

node * getInorderSuccessor(node *root,node *x)
{
    node *sccr = NULL;

    while(root!=NULL)
    {
        if(x->value>=root->value)
        {
            root=root->right;
        }
        else
        {
            sccr = root;
            root = root->left;
        }
    }

    return sccr;
}

void destroyed(node* t)
{
    if( t != NULL )
    {
        destroyed(t->left);
        destroyed(t->right);
        free( t );
    }
}

int mx(int l,int r)
{
    return (l>r)? l : r;
}

int height(node *root)
{
    if(root==NULL)
        return 0;
    else
    {
        int l=height(root->left);
        int r=height(root->right);
        return mx(l,r)+1;
    }
}
