fn sieve_of_eratosthenes(n: usize) -> Vec<bool> {
    let mut primes = vec![true; n + 1];
    primes[0] = false; // 0 is not prime
    primes[1] = false; // 1 is not prime

    let mut p = 2;
    while p * p <= n {
        if primes[p] {
            mark_multiples(&mut primes, p);
        }
        p += 1;
    }

    primes
}

fn mark_multiples(primes: &mut [bool], prime: usize) {
    let mut multiple = prime * prime;
    while multiple < primes.len() {
        primes[multiple] = false;
        multiple += prime;
    }
}

fn main() {
    let primes = sieve_of_eratosthenes(10);
    println!("primes = {primes:?}");
}
