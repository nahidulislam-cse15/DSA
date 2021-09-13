def insertion_sort(a):
    for i in range(len(a)):
        data=a[i]
        j=i-1
        while j>=0 and a[j]>data:
              a[j+1]=a[j]
              j-=1
        a[j+1]=data
    print(a)
a=[4, 3, 2, 5, 25,10,7,100,23,27]
insertion_sort(a)
