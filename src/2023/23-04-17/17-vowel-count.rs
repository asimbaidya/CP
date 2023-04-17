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

        let mut is_vowel = [false; 128];
        is_vowel[b'a' as usize] = true;
        is_vowel[b'e' as usize] = true;
        is_vowel[b'i' as usize] = true;
        is_vowel[b'o' as usize] = true;
        is_vowel[b'u' as usize] = true;

        for ch in line.chars() {
            if ch as u8 < 127 && is_vowel[ch as  usize]{ // wtf
            // if ch as u8 <= 127 && is_vowel[ch as usize] {
                vowel_count += 1;
            }
        }
        println!("Number of vowels = {vowel_count}");
        // AC
    }
}
