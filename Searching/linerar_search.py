def linerar_search(a,target):
    for i in range(len(a)):
        if a[i] == target:
            return i
    return -1
a=[1,2,3,4,5]
target=6
index=linerar_search(a,target)
if(index==-1):
    print("not Found")
else:
    print("found at index",index)
