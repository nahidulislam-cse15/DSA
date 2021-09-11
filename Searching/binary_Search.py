def binary_search(a,target):
    left,right=0,len(a)-1
    while left <=right:
        mid=(left+right)//2
        if a[mid] == target:
            return mid
        else:
            if a[mid] <target:
                left = mid+1
            else:
                right = mid-1
    return -1
a=[1,2,3,4,5,7,200,400]
target=200
index=binary_search(a,target)
if(index==-1):
    print("not Found")
else:
    print("found at index",index)
