// file: PriorityQueueInterface.h                                                                                                                                                                                  

#include "Call.h"

typedef Call ItemType;
// replace int with desired ItemType; it must be comparable                                                                                                                                                        
// using the relational operators                                                                                                                                                                                  

class PriorityQueueInterface
{
public:

   virtual bool isEmpty() const = 0;
   // input: none                                                                                                                                                                                                  
   // output: return true if priority queue is empty; else false                                                                                                                                                   

   virtual int length() const = 0;
   // input: none                                                                                                                                                                                                  
   // output: return number of items in the priority queue                                                                                                                                                         

   virtual bool enqueue(const ItemType& newEntry) = 0;
   // input: item to be added to priority queue                                                                                                                                                                    
   // output: returns true if item is added; else false                                                                                                                                                            

   virtual bool dequeue() = 0;
   // input: none                                                                                                                                                                                                  
   // output: returns true if the item with the highest                                                                                                                                                            
   //         priority has been removed; else false                                                                                                                                                                

   virtual ItemType front() const= 0;
   // precondition: priority queue is not empty                                                                                                                                                                    
   // input: none                                                                                                                                                                                                  
   // output: returns a copy of the item with the                                                                                                                                                                  
   //         highest priority                                                                                                                                                                                     

};




