"""Count the number of possible triangles
Given an unsorted array of positive integers, find the number of triangles that can be formed with three different array elements as three sides of triangles. For a triangle to be possible from 3 values, the sum of any of the two values (or sides) must be greater than the third value (or third side). """

def  count_triangles(edges):
    count=0
    for i in range(len(edges)):
        for j in range(i+1,len(edges)):
            for k in range(j+1,len(edges)):
                if edges[i]+edges[j]>edges[k] and edges[j]+edges[k]>edges[i] and edges[k] + edges[i] > edges[j]:
                    count+=1
    return count
limit=int(input("Enter the limit "))
edges=[int(input()) for i in  range(limit)]
print(edges)
print("Count of Possible Triangle : ",count_triangles(edges))