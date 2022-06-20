typedef struct node_t Node;
struct node_t {
  Node* next;
};

int check(int i,Node* node,Node* test){
  int j=1;
  
  while(j<=i){
    if(node==test)
      return j;
    j++;
    node=node->next;
  }
  return 0;
}

int loop_size(Node* node) {
  if(node==node->next) return 1;
  Node* test;
  int res=0;
  test=node;
  int i =0;
  while(i>-1){
    res = check(i,node,test);
    if(res>0){
      return i-res+1;
    }
    i++;
    test=test->next;
  }
  return 0;
}
