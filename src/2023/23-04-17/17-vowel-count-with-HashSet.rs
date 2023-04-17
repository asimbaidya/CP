use std::collections::HashSet;

fn main() {
    let mut buf = String::new();

    std::io::stdin()
        .read_line(&mut buf)
        .expect("Could not read  buf!");

    // do not forget the .unwrap()
    let test_count = buf.trim().parse::<usize>().unwrap();

    for _ in 0..test_count {
        let mut line_buf = String::new();
        std::io::stdin()
            .read_line(&mut line_buf)
            .expect("Could not read line_buf");

        let line = line_buf.trim();

        // done with input, now line variable  contain the input line
        // just need to count number of vowel in the line string
        let mut vowel_count = 0;

        // two approach exist.
        // 1. using map & then checkign if the  value exist in the map
        // 2. using an array to check if vowel_count
        // "aeiou"

        // wtf shit is this doing
        let vowels: HashSet<char> = ['a', 'e', 'i', 'o', 'u'].iter().cloned().collect();

        // iterate throuch each char
        for ch in line.chars() {
            // HashSet has .contains(&value) method which returns bool
            if vowels.contains(&ch) {
                vowel_count += 1;
            }
        }

        println!("Number of vowels = {vowel_count}");
        // AC
    }
}
