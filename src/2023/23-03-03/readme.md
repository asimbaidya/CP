# what I missed

## [1] [https://codeforces.com/contest/1360/problem/D](https://codeforces.com/contest/1360/problem/D)

so, I needed max a divisor of $n$, and the answr is $n/(maxDivisor)$ = $minValue$ package that will satisfy the condition thus get a minimal answer. So for,

> input

```text
5
8 7
8 1
6 10
999999733 999999732
999999733 999999733
```

```python
ans = n;
for x in range(1,math.sqrt(n)):
    if n%x == 0:
      # x is divisor of n
      # also, (n/x), also another divisor of x
      # For above problem, max  divisor need to be less than k
      # because package range 1..k,
      # final answer should be,
      for i in [x,n/x]:
        if i <= k:
          # again, as i is minimum divisor, the answer should be minimum when choosign maximum divisor.
          # so, again, need to compare with ans(assumed n at first for n being prime)
          ans = min(x/i,ans)
# complexity:
# 100*sqrt(1_000_000_000) >  3.162277*10^{6} <  border_case

```
