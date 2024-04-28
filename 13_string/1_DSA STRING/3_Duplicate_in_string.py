s="abacddddee"
dic=dict()

# method1
for i in s:
    dic.setdefault(i)           #set default value to none
    if(dic[i]!=None):
        dic[i]=dic[i]+1
    else:
        dic[i]=1

for i in s:
    if(dic[i]>0):
        print(i,":",dic[i])
    dic[i]=0

#method2
# for i in s:     # setting default dic value to 1
#     dic[i]=1
    
# for i in s:     # incrementing its value
#     dic[i]=dic[i]+1
    
# for i in s:     # print the answer
#     if(dic[i]>0):
#         print(i,":",dic[i])
#     dic[i]=0



