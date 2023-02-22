# problem

lets say I have 1, 3, 5, 2, 25,23, 16, 30. Now I want multiply these number, and I only need to know the ending zeros eg(114234000 - ending with 3 zeros, so ending zeros = 3).

# solution

(low budget math exp)

every number if constructed with use of prime numbers. first number with ending zeros is 10. And when a number if multiplied with 10 eg `x`, we simply add one zeros at end of `x` like `x0`

eg.

`394 * 10 = 3940`

so the,
in cse of - `5*6 = 30`. we get a leading zeros, but these is no `10` right ?

these happenens cuz

5 -> `is prime`
6 -> multiplication of `2*3` where

SO,
=> `5*6 = 5 * 2 * 3`
=> `5*6 = 10 * 3`
=> `5*6 = 30` ; 0 added at end of `3` to make `30` :)

; now lets look at another case,
= `4 * 25 = 2 * 2 * 5 * 5`
= `4 * 25 = 10 * 10` ; here multiplying `10` with `10` so one zero will go at end of one `10` :( to make `100`. So, two zero because we had 2 ten in `4*25`

; similarly
= `4*25*5*6 = 2 * 2 * 5 * 5 * 5 * 2 * 3`
= `4*25*5*6 = 10*10*10*3`
= `4*25*5*6 = 3000`; three zeros at end of 3
; ? so if, it is
`4*25*5*23*2` -> 23000 ? Yes;

; so to make 10, we need `2`,`5` pair in factors of multiplicands;
; so what we can do for `dimiq-12` is iterate from 1 to 100 and find number of 2 & five in prime factor in each number, and after that, min(total(2),total(5)) will the number of leading zeros in factorial of 100; However, in this series, total 2 will be greater than total 5, so finding total five will do the job

# code part

`1` - iterate 1 to 100
`2` - check if five exist in it's factors, by just doing (i % 5), if 5 exist in i's factors, then i%5 will be zero .. also, for 25, 2 factor, so nned to use while loop for finding all factor; tho for dimiq-12, only for 25, two while loop will run?()
`3` - somehow count total five in whole range ...

## citation

- [geeksforgeeks](https://www.geeksforgeeks.org/count-trailing-zeroes-factorial-number/)
