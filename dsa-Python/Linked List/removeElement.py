from linkedList import *
def removeElement(head,number):
    temp=head
    temp2=None
    index=-1
    while  temp is not None:
        if temp.data==number and temp2==None:
            temp2=temp
            temp=temp.next
            head=temp
            temp2.next=None
            temp2=None
            index=1
            continue
        elif temp.data==number:
            temp2.next=temp.next
            index=1
            temp=temp.next
            continue
        temp2=temp
        temp=temp.next
    return index,head

if __name__=="__main__":
    limit=int(input("Enter the limit for SLL"))
    linkedList=LinkedList()
    for i in range(limit):
        data=int(input("Enter element: "))
        linkedList.insertAtEnd(data)
    print("List is ")
    linkedList.printList()
    number=int(input("Enter the number to remove"))
    index,linkedList.head=removeElement(linkedList.head,number)
    if index==-1:
        print("Number not found")
    elif index>-1:
        print("Number is removed ")
        linkedList.printList()