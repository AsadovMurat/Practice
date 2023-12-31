func printTypes(data []interface{}) { // Функция printTypes для вывода статического типа каждого элемента в слайсе data
 for _, val := range data { // Итерация по каждому элементу в слайсе data
  switch val.(type) { // Определение типа элемента с помощью оператора switch
  case int:
   fmt.Printf("int ")
  case string:
   fmt.Printf("string ")
  case Human:
   fmt.Printf("Human ")
  case *Human:
   fmt.Printf("*Human ")
  default:
   fmt.Printf("interface ")
  }
 }
}