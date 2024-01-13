typedef struct LinkedList

{

  int data;

  struct LinkedList *next;

}node;

node *first,*temp,*ttemp,*p,*q,*r,*ptemp,*pttemp,

*ntemp,*nttemp;



void init()

{

 first=temp=ttemp=null;

}

void addnode(int val)

{

  temp=first;

  while(temp->next!=null)

  {

  temp=temp->next;



  }

  ttemp=(node*)malloc(sizeof(node));

  ttemp->data=val;

  ttemp->next=null;

  temp->next=ttemp;

}

void createfirst(int val)

{

 first=(node*)malloc

 (sizeof(node));

  first->data=val;

  first->next=null;

}

void disp()

{

 temp=first;

 while(temp!=null)

 {

   printf("\n%d",temp->data);

   temp=temp->next;

 }

}



