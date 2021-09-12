package main

import "fmt"

func binary_search(a [5]int, t int) int{
	for i, val := range a {
		if val == t {
			return i
		}
		
	}
	return -1
}
func main() {
	a := [5]int{1, 2, 3, 4, 5}
	fmt.Println(a)
	target := 7
	index:=binary_search(a, target)
	if(index==-1){
	    fmt.Println("not Found")
	}else {
	    fmt.Println("found at index",index)
	}
}
