package main

import "fmt"

func linear_search(a [7]int, t int) int{
	left,right:=0,len(a)-1
    for left <=right{
        mid:=(left+right)//2
        if (a[mid] == t){
            return mid
		}else if (a[mid] <t){
                left = mid+1
       } else{
                right = mid-1
		}
	}
	return -1
}
func main() {
	a := [7]int{1, 2, 3, 4, 5,7,9}
	fmt.Println(a)
	target := 7
	index:=linear_search(a, target)
	if(index==-1){
	    fmt.Println("not Found")
	}else {
	    fmt.Println("found at index",index)
	}
}
