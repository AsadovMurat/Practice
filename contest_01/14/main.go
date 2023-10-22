package main

import "fmt"

func main() {
	var row int
	var col int

	fmt.Scan(&row)
	fmt.Scan(&col)

	fmt.Print("    |")
	for i:=1; i <= col; i++ {
    if i>=100 {
		fmt.Print(" ", i)
		} else if i>=10 {
        fmt.Print("  ", i)
        } else  {
        fmt.Print("   ", i)
        }
	}
fmt. Println()
fmt.Print("   --")
for i := 1; i <= col ; i++ {
 d:= row
 c:= i * d
 if c >= 100 {
	fmt.Print("----")
 }  else if c >= 10 {
	fmt.Print("----")
} else if c < 10 {
	fmt.Print("----")
}
}

 fmt.Println()
for d := 1; d <= row ; d++ {
	if d >=10{
	fmt.Print("  ", d, "|")
	} else {
		fmt.Print("   ", d, "|")
	}
	for i:=1; i <= col; i++ {
	 c := i * d
	 if c >= 100 {
	 fmt.Print(" ", c)
	} else if c >= 10 {
		fmt.Print("  ", c)
	} else if c < 10 {
		fmt.Print("   ", c)
	}
}
	fmt.Println()
}
}


