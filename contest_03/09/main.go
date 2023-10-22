package main

import "fmt"
import "slices"

func main() {
	var number int
	var diff int
	var n int
	var X int
	var boolinfo = false
	var numbers []int

fmt.Scan(&n, &X)

for i:= 0; i < n; i++{
	fmt.Scan(&number)
	numbers = append(numbers, number)
}
for _, value := range numbers {
	if value > X{
		continue
	}
	diff = X - value
	boolinfo = slices.Contains(numbers, diff)
	if boolinfo {
		if value > diff {
			fmt.Print(diff, value)
		} else{
			fmt.Print(value, diff)
		}
		break;
	}
}
if !boolinfo {
	fmt.Print(0, 0)
}
}