class Node:
    def __init__(self, data,next=None):
        self.data = data
        self.next = next

class LinkedList:
    def __init__(self):
        self.head = None
    # Add a new node at begining
    def insertAtStart(self,num):
        if self.head==None:
            node=Node(num)
            self.head=node
        else:
            node=Node(num)
            node.next=self.head
            self.head=node
        return
    def insertAtEnd(self,num):
        temp=self.head
        while temp.next:
            temp=temp.next
        node=Node(num)
        temp.next=node
        return
    def insertAtIndex(self,num,index):
        if index==0 or self.head is None:
            self.insertAtStart(num)
        try:
            temp=self.head
            temp2=None
            while index :
                temp2=temp
                temp=temp.next
                index-=1
            print("temp is ",temp)
            node=Node(num,temp)
            temp2.next=node
        except Exception as e:
            print("Wrong Index try Again")
            index=int(input("Enter a valid index "))
            self.insertAtIndex(num,index)

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
            print("1.Insert At Beginning\n2.Insert At the End\n3.Insert at particular position\n6.Display List\n7.exit ")
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
            elif ch==7:
                print("Program terminated")
                break
            elif ch==6:
                linkedList.printList()
            else:
                print("Wrong Choice Try Again")
        except:
            pass
