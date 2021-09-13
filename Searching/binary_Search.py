def binary_search(a,target):
    left,right=0,len(a)-1
    while left <=right:
        mid=(left+right)//2
        if a[mid] == target:
            return mid
        
        elif a[mid] <target:
                left = mid+1
        else:
                right = mid-1
    return -1
a=[1,2,3,4,5]
target=5
index=binary_search(a,target)
if(index==-1):
    print("not Found")
else:
    print("found at index",index)
