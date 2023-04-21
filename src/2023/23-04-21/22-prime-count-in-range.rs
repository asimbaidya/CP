// approach: seive of prime  on b_max & then return prime count for each input range (a,b)

use std::io::*;

fn get_is_prime(b: usize) -> Vec<bool> {
    // create a local vector of size (b+1)
    let mut is_prime = vec![true; b + 1];

    is_prime[0] = false;
    is_prime[1] = false;

    let cap = ((b as f64).sqrt() + 1.0) as usize;

    for i in 2..=cap {
        if is_prime[i as usize] {
            let i2 = i.pow(2);
            for j in (i2..=b).step_by(i.try_into().unwrap()) {
                is_prime[j as usize] = false;
            }
        }
    }

    return is_prime;
}

fn main() {
    let is_prime = get_is_prime(1000_000);

    // yeh!
    let mut lines = stdin().lock().lines();
    let num_of_input: usize = lines.next().unwrap().unwrap().parse().unwrap();

    for _ in 0..num_of_input {
        let line = lines.next().unwrap().unwrap();
        let mut iter = line.split_whitespace();
        let a: i32 = iter.next().unwrap().parse().unwrap();
        let b: i32 = iter.next().unwrap().parse().unwrap();

        //
        let mut count = 0;
        for i in a..=b {
            if is_prime[i as usize] {
                count += 1;
            }
        }
        println!("count = {count}");
    }

    // in 1..100k - 9,592 -> okey
    // in 1..1m - 78,498 -> okey
}
