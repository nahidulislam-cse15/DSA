def selection_sort(a):
    for i in range(len(a)-1):
        min=i
        for j in range(i+1,len(a)):
            if a[j] <a[min]:
                min=j
        a[i],a[min]=a[min],a[i]
    print(a)
a=[1,5,7,2,3,6,10,8,12,5,7,11]
selection_sort(a)
