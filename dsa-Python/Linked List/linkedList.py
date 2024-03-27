class Node:
    def __init__(self, data,next=None):
        self.data = data
        self.next = next

class LinkedList:
    def __init__(self):
        self.head = None
    # Add a new node at begining
    def insertAtStart(self,num):
            node=Node(num)
            node.next=self.head
            self.head=node
            return
    def insertAtEnd(self,num):
        if self.head is None:
            self.head=Node(num)
        else:
            temp=self.head
            while temp.next:
                temp=temp.next
            node=Node(num)
            temp.next=node
        return
    def insertAtIndex(self,num,index):
        if index==0 or self.head is None:
            self.head=Node(num)
        try:
            temp=self.head
            temp2=None
            while index :
                temp2=temp
                temp=temp.next
                index-=1
            node=Node(num,temp)
            temp2.next=node
        except Exception as e:
            print("Wrong Index try Again")
            index=int(input("Enter a valid index "))
            self.insertAtIndex(num,index)
    def  deleteFromStart(self):
        if self.head is None:
            print("List is empty")
        else:
            temp=self.head
            self.head=self.head.next
            del temp
    def deleteFromEnd(self):
        if self.head is None:
            print("List is empty")
        else:
            temp2=None
            temp=self.head
            while temp.next:
                temp2=temp
                temp=temp.next
            if temp2:
                temp2.next=None
            else:
                self.head=None
    def  deleteAtIndex(self,index):
        if self.head is None:
            print("The list is Empty ")
        else:
            try:
                temp=self.head
                temp2=None
                while index :
                    temp2=temp
                    temp=temp.next
                    index-=1
                if temp2:
                    print("Before deleting",temp.data)
                    temp2.next=temp.next
                else:
                    self.head=None
            except Exception as e:
                print("Wrong Index try Again")
                index=int(input("Enter a valid index "))
                self.removeAtIndex(index)
    def printList(self):
        if self.head==None:
            print("List is empty")
            return
        temp=self.head
        while  (temp):
            if temp.next!=None:
                print(temp.data,end='-->')
            else:
                print(temp.data)
            temp=temp.next
        print()
        return
if __name__=='__main__':
    linkedList=LinkedList()
    while True:
        try:
            print("1.Insert At Beginning\n2.Insert At the End\n3.Insert at particular position\n4.Delete From Start\n5.Delete From End\n6.Delete from a index\n7.Display List\n8.exit ")
            ch=int(input("Enter your choice "))
            if ch==1:
                num=int(input("Enter then number to insert "))
                linkedList.insertAtStart(num)
            elif ch==2:
                num=int(input("Enter the number  to be inserted "))
                linkedList.insertAtEnd(num)
            elif ch==3:
                num=int(input("Enter the number "))
                index=int(input("Enter the index to insert the Node "))
                linkedList.insertAtIndex(num,index)
            elif ch==4:
                print("Before Deletion list:")
                linkedList.printList()
                linkedList.deleteFromStart()
                print("After Deletion list: ")
                linkedList.printList()
            elif ch==5:
                print("Before Deletion List")
                linkedList.printList()
                linkedList.deleteFromEnd()
                print("After Deletion")
                linkedList.printList()
            elif ch==6:
                index=int(input("Enter the index to delete "))
                linkedList.deleteAtIndex(index)
                print("The Linked List after deletion is :")
                linkedList.printList()
            elif ch==8:
                print("Program terminated")
                break
            elif ch==7:
                linkedList.printList()
            else:
                print("Wrong Choice Try Again")
        except  Exception as e:
            print("Error Occured Try Again")