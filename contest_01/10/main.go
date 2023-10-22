package main

import "fmt"

func main() {
	var a string
	var b string
	var c string
	fmt.Scan(&a)
	fmt.Scan(&b)
	fmt.Scan(&c)
	if a == "Нет" {
		if b == "Нет" {
			if c == "Нет" {
				fmt.Println("Кот")
			} else if c == "Да" {
				fmt.Println("Жираф")
			}
		} else if b == "Да" {
			if c == "Нет" {
				fmt.Println("Курица")
			} else if c == "Да" {
				fmt.Println("Страус")
			}

		}
	
	} else if a == "Да" {
		if b == "Нет" {
			if c == "Нет" {
				fmt.Println("Дельфин")
			} else if c == "Да" {
				fmt.Println("Плезиозавры")
			}
		} else if b == "Да" {
			if c == "Нет" {
				fmt.Println("Пингвин")
			} else if c == "Да" {
				fmt.Println("Утка")
			}
		} 
}

		}