package main

import "fmt"

func selection_sort(a []int){
	for i:=0;i<len(a)-1;i++ {
        min:=i
        for j:=i+1;j<len(a);j++ {
            if (a[j] <a[min]){
                min=j
			}
}
a[i],a[min]=a[min],a[i]
}
fmt.Println(a)
}
func main() {
	a := []int{4, 3, 2, 5, 1,10,7,100,23,27}
	selection_sort(a)
}
