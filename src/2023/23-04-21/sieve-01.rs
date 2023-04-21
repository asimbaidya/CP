// scraped from web

fn sieve_of_eratosthenes(n: usize) -> Vec<usize> {
    let mut is_prime = vec![true; n + 1];

    is_prime[0] = false;
    is_prime[1] = false;

    for i in 2..=(n as f64).sqrt() as usize {
        if is_prime[i] {
            let mut j = i * i;
            while j <= n {
                is_prime[j] = false;
                j += i;
            }
        }
    }

    (0..=n).filter(|&x| is_prime[x]).collect()
}

fn main() {
    let primes = sieve_of_eratosthenes(1000);
    // println!("primes = {primes:?}");
    println!("count = {}", primes.len()); // okey

    let primes = sieve_of_eratosthenes(100_000);
    // println!("primes = {primes:?}");
    println!("count = {}", primes.len()); // okey

    let primes = sieve_of_eratosthenes(1000_000);
    // println!("primes = {primes:?}");
    println!("count = {}", primes.len()); // okey
}
