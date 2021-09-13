def bubble_sort(a):
    for i in range(len(a)-1):
        for j in range(i+1,len(a)):
            if a[j] <a[i]:
                a[i],a[j]=a[j],a[i]
    print(a)
a=[1,5,7,2,3,6,10,8,12,5,100,34,64,7,11]
bubble_sort(a)
