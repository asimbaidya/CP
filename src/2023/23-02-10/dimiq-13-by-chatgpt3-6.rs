fn fact(n: u128) -> u128 {
    match n {
        0 => 1,
        _ => n * fact(n - 1),
    }
}

fn main() {
    println!("Input [a-z] only & each char separated!");
    println!("Now type total Test cases: ");

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

        let mut word_count = [0u128; 26];

        for word in &words {
            for c in word.chars() {
                word_count[(c as u8 - b'a') as usize] += 1;
            }
        }

        let mut denominator = fact(total_words);
        for count in word_count.iter() {
            if *count > 1 {
                denominator /= fact(*count);
            }
        }

        println!("1/{}", denominator);
    }
}
