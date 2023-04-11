// done in 10m,
// almost forgot how to take input in first attempt :(

fn main() {
    // read total test
    let mut buf = String::new();
    std::io::stdin()
        .read_line(&mut buf)
        .expect("Failed to read test-casae!");
    let total_test = buf.trim().parse::<usize>().unwrap();

    for _ in 0..total_test {
        let mut line = String::new();
        std::io::stdin()
            .read_line(&mut line)
            .expect("Failed to line");

        let line = line.trim();

        let mut char = String::new();
        std::io::stdin()
            .read_line(&mut char)
            .expect("Failed to read char");
        let char = char.chars().next().unwrap();

        let mut count = 0;
        for ch in line.chars() {
            if ch == char {
                count += 1;
            }
        }

        if count == 0 {
            println!("'{char}' is not present");
        } else {
            println!("Occurrence of '{char}' in '{line}' = {count}")
        }
    }
}
