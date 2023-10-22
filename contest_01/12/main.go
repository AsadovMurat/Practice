package main

import "fmt"

func main() {
	var x , i int
fmt.Scan(&x)
for  x != 1 {
	if x % 2 == 0 {
	x = x / 2
	i = i + 1
} else if x % 2 != 0 {
	x = (3 * x) + 1
	i = i + 1
}
		}
		fmt.Println(i)
	}
 

