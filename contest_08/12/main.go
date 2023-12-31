type SimpleStack struct { data *[]rune }
func NewSimpleStack() (r SimpleStack) { wtf := make([]rune,0); r.data = &wtf; return }
func (self SimpleStack) empty() bool { return len(*self.data)==0 }
func (self SimpleStack) push(r rune) { *self.data = append(*self.data, r) }
func (self SimpleStack) top() rune { return (*self.data)[len(*self.data)-1] }
func (self SimpleStack) pop() (r rune) {
    r = self.top()
    *self.data = (*self.data)[:len(*self.data)-1]
    return
}