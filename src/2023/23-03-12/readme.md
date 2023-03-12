# explanatio

## 1790E - Vlad and a Pair of Numbers

given, $x$,

```math
a \oplus b = \frac{a+b}{2} = x

```

(1)as given condition, x must be a even, so last bit will be zero, (2)Also,
$a\oplus b$ between bits means if both bit are same then $0$ else $1$, on
the other hand, we can sure that size of $a+b$ in bit will be strictly 1
bit greater than x, means.(3) if we consider $a = x,b=0$ then at at position
where a is $1$ b must have zero(to hold the $\oplus$ condition) & position
of $0$, what ever in $a$ will be in $b$, thus both will contribute the sum of $a+b$,
so we can check at position $0$ in $x$ that if we consider $1$ in both $a$ and $b$
if it crosses $x*2$ as $a+b == 2*x$. etc etc.

we can also derive equation for

```math
// derive it again
```

.. however, if another approach is(editorial)
if we consider $a=x$ & $b=0$, then $a \oplus b = x$ already holds, now to make
$ \frac{a+b}{2} = x$ we need to add $\frac{x}{2}$ to both a & b, which makes

```math
a &= \frac{x}{2}+x
b &=  x/2
```

otherwise not possible
