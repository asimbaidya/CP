// BUG
// for:
// 1 2 3 1  => 1/24 but correct output 1/12
//
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
        .expect("Could not read input!");

    let total_test: usize = buf.trim().parse().unwrap();

    for _ in 1..=total_test {
        let mut buf = String::new();
        std::io::stdin()
            .read_line(&mut buf)
            .expect("Could not read input!");

        let words: Vec<String> = buf.trim().split(" ").map(|x| x.to_string()).collect();

        let total_words = words.len();

        let mut duplicates = 0;

        for i in 0..total_words {
            for j in (i + 1)..total_words {
                if words[i] == words[j] {
                    duplicates += 1;
                    break;
                }
            }
        }

        let mut ans = fact(total_words as u128);

        for i in 1..=duplicates {
            ans /= fact(i as u128);
        }

        println!("1/{}", ans);
    }
}
