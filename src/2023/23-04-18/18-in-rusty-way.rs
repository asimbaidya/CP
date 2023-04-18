use std::io::{self, BufRead};
// gpt aided

fn main() {
    let stdin = io::stdin();
    let mut lines = stdin.lock().lines().map(|line| line.unwrap());

    // Read the number of test cases
    let t: usize = lines.next().unwrap().parse().unwrap();

    for _ in 0..t {
        let s: String = lines.next().unwrap();

        let (vowels, consonants): (String, String) = s
            .chars()
            .filter(|c| c.is_alphabetic())
            .partition(|c| is_vowel(*c));

        // Print the vowels and consonants in separate lines
        println!("{}", vowels);
        println!("{}", consonants);
    }
}

fn is_vowel(c: char) -> bool {
    matches!(c, 'a' | 'e' | 'i' | 'o' | 'u' | 'A' | 'E' | 'I' | 'O' | 'U')
}
