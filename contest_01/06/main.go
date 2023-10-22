package main

import "fmt"

func main() {
	var N int
	a:=0
	b:=0
	c:=0
	d:=0
	e:=0
	fmt.Scan(&N)
	for N - 5000 >= 0 {
		N = N - 5000
		a = a + 1
	} 
		 for N - 1000 >= 0{
		N = N - 1000
		b = b + 1
	}  
		 for N - 500 >=0 {
		N = N - 500
		c = c + 1
	} 
	
		 for N - 200 >= 0 {
		N = N - 200
		d = d + 1
	} 

		 for N - 100 >= 0 {
			N = N - 100
			e = e + 1	
	} 
	fmt.Println(a ,b ,c ,d ,e)
}
