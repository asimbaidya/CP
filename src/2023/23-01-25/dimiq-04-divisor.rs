use std::io;
// day2

fn main() {
    let mut buf = String::new();

    // reading line
    io::stdin().read_line(&mut buf).unwrap();

    // ... converting into usize
    let count = buf.trim().parse::<usize>().unwrap();

    for c in 1..=count {
        let mut buf = String::new();
        // again.. reading line
        io::stdin().read_line(&mut buf).unwrap();

        // converting line to string ... so given lineare &str no.. return type of .trim() is &str ?
        let line = buf.trim().to_string();

        // converting line to i32
        let num = line.parse::<i32>().unwrap();

        // printing case [case]:
        print!("case {c}:");

        // basic
        for i in 1..=num {
            if num % i == 0 {
                print!(" {i}");
            }
        }
        print!("\n");
    }
}
