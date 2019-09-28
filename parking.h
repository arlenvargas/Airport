#ifndef PARKING_H
#define PARKING_H
#include<plane.h>
#include<node.h>

class Parking//pila
{
private:
 Node *head;
 Node* queue;
 int counter;
public:
 Parking(Node* head,Node * queue,int counter){
    this->head=head;
     this->queue=queue;
     this->counter=counter;
 }
 Parking(){
    this->head=head;
     this->queue=queue;
     this->counter=0;
 }

 Node* setHead(Node* head){
     this->head=head;
 }
 Node* getHead(){
     return this->head;
 }
 Node* setQueue(Node*queue){
     this->queue=queue;
 }
 Node* getQueue(){
     return this->queue;
 }
 int getCounter(){
     return this->counter;
 }
};

#endif // PARKING_H
