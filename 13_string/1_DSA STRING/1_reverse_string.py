s="kewal"
# reversing a string
s=s[len(s)-1::-1]   
print(s)

# reversing a list of character 
ss=['k','e','w','a','l']
i=0
j=len(ss)-1
while(i<=j):
    ss[i],ss[j]=ss[j],ss[i]   # use swap function in this place when doing in c++
    i+=1
    j-=1
print(ss)