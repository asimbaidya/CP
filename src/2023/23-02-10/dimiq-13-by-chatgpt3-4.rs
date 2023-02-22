// OKEY ( maybe)

use std::collections::HashMap;

fn fact(n: u128) -> u128 {
    if n == 0 {
        return 1;
    }
    return n * fact(n - 1);
}

fn main() {
    let mut buf = String::new();
    std::io::stdin()
        .read_line(&mut buf)
        .expect("Error reading input");

    let total_test: usize = buf.trim().parse().unwrap();

    for _ in 1..=total_test {
        let mut buf = String::new();
        std::io::stdin()
            .read_line(&mut buf)
            .expect("Error reading input");

        let words: Vec<&str> = buf.trim().split(" ").collect();

        let total_words = words.len();

        let mut map = HashMap::new();

        for w in &words {
            let count = map.entry(w).or_insert(0);
            *count += 1;
        }

        let mut ans = fact(total_words as u128);

        for (_k, v) in &map {
            ans /= fact(*v as u128);
        }

        println!("1/{}", ans);
    }
}
