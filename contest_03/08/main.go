package main

import "fmt"

func main() {
	var n int;
	fmt.Scan(&n)
	var key int
	var map1 = make(map[int]int)
	for i:= 0; i < n; i++{
		fmt.Scan(&key)
		map1[key]++;
		if(map1[key] == 2 ){
			delete(map1, key)
		}
	}
	for key, _ := range map1{
		fmt.Print(key)
	}
}