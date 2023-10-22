package main

import "fmt"

func main() {
	var a, b ,c int
fmt.Scan(&a)
fmt.Scan(&b)
fmt.Scan(&c)
if a > b {
	if a > c {
		fmt.Println(a)
	} else if a < c {
		fmt.Println(c)
	} 
} else if a < b {
	if b > c {
		fmt.Println(b)
	} else if b < c {
		fmt.Println(c)
	} 
}
 }