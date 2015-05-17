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

int size(node *root)
{
  if(root)
  {
    return 1 + size(root->left) + size(root->right);
  }
  else
    return 0;
}
int main()
{
  node * root = NULL;
  root = newNode(5);
  root->left = newNode(6);
  root->right = newNode(7);
  root->left->left = newNode(8);
  root->left->right = newNode(9);
  root->left->left->left = newNode(10);

  cout<<"size: "<< size(root)<<endl;
  return 0;
}

