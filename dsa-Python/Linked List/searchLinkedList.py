from linkedList import *
def searchElement(head,element):
    index=-1
    while head:
        index+=1
        if (head.data==element):
            return index
        head=head.next
    return None

if  __name__ == "__main__":
    limit=int(input("Enter the limit for SLL"))
    linkedList=LinkedList()
    for i in range(limit):
        data=int(input("Enter element: "))
        linkedList.insertAtEnd(data)
    print("List is ")
    linkedList.printList()
    number=int(input("Enter the number to search"))
    index=searchElement(linkedList.head,number)
    if index==None:
        print("Number ",number," not found")
    else:
        print("Number ",number," Found At ",index)
