package main

import "fmt"

func bubble_sort(a []int) {
	for i := 0; i < len(a)-1; i++ {
		for j := i + 1; j < len(a); j++ {
			if a[j] < a[i] {
				a[i],a[j]=a[j],a[i]
			}
		}
		//a[i], a[min] = a[min], a[i]
	}
	fmt.Println(a)
}
func main() {
	a := []int{4, 3, 2, 40,53, 1, 10, 7, 100, 23, 27}
	bubble_sort(a)
}
