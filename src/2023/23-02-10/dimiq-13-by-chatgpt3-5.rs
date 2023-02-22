// okey maybe
use std::collections::HashMap;

fn fact(n: u128) -> u128 {
    match n {
        0 => 1,
        _ => n * fact(n - 1),
    }
}

fn main() {
    let mut buf = String::new();
    std::io::stdin()
        .read_line(&mut buf)
        .expect("Failed to read input");

    let total_test = match buf.trim().parse::<usize>() {
        Ok(n) => n,
        Err(error) => {
            println!("Invalid input: {}", error);
            return;
        }
    };

    for _ in 0..total_test {
        let mut buf = String::new();
        std::io::stdin()
            .read_line(&mut buf)
            .expect("Failed to read input");

        let words: Vec<&str> = buf.trim().split(" ").collect();
        let total_words = words.len() as u128;

        // let mut word_count = HashMap::new();
        let mut word_count: HashMap<&&str, u128> = HashMap::new();

        for word in &words {
            *word_count.entry(word).or_default() += 1;
        }

        let mut denominator = fact(total_words);
        for count in word_count.values() {
            if *count > 1 {
                denominator /= fact(*count as u128);
            }
        }

        println!("1/{}", denominator);
    }
}
