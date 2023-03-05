package main

import (
	"fmt"
	"strconv"
)

// // reference
// func Reverse(s string) (result string) {
// 	for _, v := range s {
// 		result = string(v) + result
// 	}
// 	return
// }

func str_rev(s string) string {
	r := ""
	for _, v := range s {
		r = string(v) + r

	}
	return r

}

func is_palindromne(x int) bool {
	if x < 0 {
		return false
	}

	// s := fmt.Sprintf("%v", x)
	s := strconv.Itoa(x)
	r := str_rev(s) // reverse of s

	return s == r

}

func main() {

	n := 333

	if is_palindromne(n) {
		fmt.Println("Yeah! Palindrome")
	} else {
		fmt.Println("No! Not a Palindrome")
	}

}
