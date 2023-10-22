package main

import (
  "fmt"
)

func main() {
  var man float64 = 0.5

  var in_year float64 = man * 365
  var tree_1 float64 = in_year / 20
  var tree_2 float64 = in_year / 32
  if float64(int(tree_1)) != tree_1 {
    tree_1++
  }
  if float64(int(tree_2)) != tree_2 {
    tree_2++
  }
  fmt.Println(in_year, int(tree_2), int(tree_1))
}