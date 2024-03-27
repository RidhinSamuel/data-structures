from linkedList import *
def findLen(head):
    length=0
    while head:
        length+=1
        head=head.next
    return length
if  __name__ == "__main__":
    limit=int(input("Enter the limit for SLL"))
    linkedList=LinkedList()
    for i in range(limit):
        data=int(input("Enter element: "))
        linkedList.insertAtEnd(data)
    print("List is ")
    linkedList.printList()
    length=findLen(linkedList.head)
    print("Length of list is ",length)
