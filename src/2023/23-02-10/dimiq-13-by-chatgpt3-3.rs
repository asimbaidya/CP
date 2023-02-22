// BUG
// Without Hashmap

fn fact(n: u128) -> u128 {
    if n == 0 {
        return 1;
    }
    return n * fact(n - 1);
}

fn main() {
    let mut buf = String::new();
    std::io::stdin().read_line(&mut buf).expect("Bomb!");

    let total_test: usize = buf.trim().parse().unwrap();

    for _ in 1..=total_test {
        let mut buf = String::new();
        std::io::stdin().read_line(&mut buf).expect("Bomb!");

        let words: Vec<String> = buf
            .trim()
            .split(" ")
            .map(|x| x.parse().expect("ops"))
            .collect();

        let total_words = words.len();

        let mut frequency = vec![0; total_words];

        // probably buggy part
        for i in 0..total_words {
            for j in 0..total_words {
                if words[i] == words[j] {
                    frequency[i] += 1;
                }
            }
        }

        let mut ans = fact(total_words as u128);

        for i in 0..total_words {
            if frequency[i] > 1 {
                ans /= fact(frequency[i] as u128);
            }
        }

        println!("1/{}", ans);
    }
}
