typedef struct node_t Node;
struct node_t {
  Node* next;
};

int loop_size(Node* node){
  //Your code goes here
  Node* a;
  Node* b;
  a=node;
  b=node->next;
  while(a!=b){
    a=a->next;
    b=b->next->next;
  }
  int i=0;
  a=a->next;
  while(a!=b){
    a=a->next;
    i++;
  }
  printf("%d ",i+1);
  return i+1;
}
