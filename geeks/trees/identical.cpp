#include<iostream>
using namespace std;

struct node
{
  int data;
  struct node *left, *right;
};

node *newNode(int data)
{
  node *temp = new node;
  temp->data = data;
  temp->left = NULL;
  temp->right = NULL;
  return temp;
}
bool isIdentical(node *root1, node *root2)
{
  if (root1 == NULL && root2 == NULL)
    return true;
  else if(root1 == NULL && root2 != NULL)
    return false;
  else if(root1 != NULL && root2 == NULL)
    return false;
  else
    return (root1->data == root2->data) && isIdentical(root1->left, root2->left) && isIdentical(root1->right, root2->right);

}
int main()
{
  node *root1 = NULL;
  root1 = newNode(5);
  root1->left = newNode(6);
  root1->right = newNode(7);
  root1->left->left = newNode(8);
  root1->left->right = newNode(9);
  root1->left->left->left = newNode(10);

  node *root2 = newNode(5);
  root2->left = newNode(6);
  root2->right = newNode(7);
  root2->left->left = newNode(3);
  root2->left->right = newNode(9);
  root2->left->left->left = newNode(0);

  cout<<"isIdentical: "<< isIdentical(root1,root2)<<endl;
  return 0;
}

