fn is_prime(n: u64) -> bool {
    if n < 2 {
        return false;
    }
    let max_divisor = (n as f64).sqrt() as u64 + 1;
    for d in 2..max_divisor {
        if n % d == 0 {
            return false;
        }
    }
    true
}

fn main() {
    let mut prime_count = 0;

    for i in 1..=1000_000 {
        if is_prime(i) {
            // println!("{i} = {}", true);
            prime_count += 1;
        }
    }

    println!("{prime_count} primes found in whatever range youprovided!");
}
