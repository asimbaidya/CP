use std::io;
// day1

fn main() {
    let mut buf = String::new();

    // reading line
    io::stdin().read_line(&mut buf).unwrap();

    // ... converting into usize
    let count = buf.trim().parse::<usize>().unwrap();

    for _ in 1..=count {
        let mut buf = String::new();
        // again.. reading line
        io::stdin().read_line(&mut buf).unwrap();

        // return type of trim is &str
        let fo = buf.trim();

        // converting line to string ... so given lineare &str no.. return type of .trim() is &str ?
        let line = buf.trim().to_string();
        // first converting  line into chars iterator and then finding last iterator and then
        // converting it into last char
        let last_char = line.chars().last().unwrap();

        // again, finally converting that char into base 10 digit
        let num = last_char.to_digit(10).unwrap();

        // checking if odd or even
        if num % 2 == 0 {
            println!("even");
        } else {
            println!("odd");
        }
    }
}
