def search(l,n,s,e):
    if(s>e):
        return -1
    mid=(s+e)//2
    if(l[mid]==n):
        return mid
    if(l[mid]>n):
        return search(l,n,s,mid-1)
    if(l[mid]<n):
        return search(l,n,mid+1,e)
        
    
  
    
l=[int(i) for i in input("Enter list elements").split()]

n=int(input("Enter the number"))

e=len(l)
s=0
result=search(l,n,s,e,)
print(result)
