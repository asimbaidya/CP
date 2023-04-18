fn main() {
    let mut buf = String::new();
    std::io::stdin().read_line(&mut buf).unwrap();

    let test_size: usize = buf.trim().parse().unwrap();

    for _ in 0..test_size {
        let mut line_buf = String::new();
        std::io::stdin().read_line(&mut line_buf).unwrap();

        // vector for vowels
        let mut vowels: Vec<char> = vec![];
        // vector for consonants
        let mut consonants: Vec<char> = vec![];

        for ch in line_buf.trim().chars() {
            if matches!(ch, 'a' | 'e' | 'i' | 'o' | 'u') {
                vowels.push(ch)
            } else if ch.is_alphabetic() {
                consonants.push(ch)
            }
        }

        // println!("{vowels:?}");
        // println!("{consonants:?}");
        println!("{}", vowels.iter().collect::<String>());
        println!("{}", consonants.iter().collect::<String>());
    }
}
