package main

import "fmt"

func insertion_sort(a []int){

	for i:=1;i<len(a);i++ {
        data:=a[i]
		j:=i-1
        for j>=0 && a[j] > data {
				a[j+1]=a[j]
				j-=1
				}
		a[j+1]=data
}
fmt.Println(a)
}
func main() {
	a := []int{4, 3, 2, 5, 25,10,7,100,23,27}
	insertion_sort(a)
}
