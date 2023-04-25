// daily does
package main

import "fmt"

func main() {

	// declare n & input from stdin
	var n int
	fmt.Scan(&n)

	for i := 0; i < n; i++ {

		// declare x & input from stdin
		var x int32
		fmt.Scan(&x)

		// evaluate if even & console out answer
		if x%2 == 0 {
			fmt.Println("even")
		} else {
			fmt.Println("odd")
		}
	}
}
