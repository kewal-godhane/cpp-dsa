# string slicing methon
S="abba"
if(S[:len(S)]==S[len(S)-1::-1]):
    print("its a palindrome")
else:
    print("not a palindrome")
    
# iteration methon
i=0
j=len(S)-1
flag=False
while(i<=j):
    if(S[i]!=S[j]):
        flag=True
        break
    j-=1
    i+=1
if(flag):
    print("not a palindrome")
else:
    print("its a palindrome")