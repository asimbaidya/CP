fn main() {
    // test case counter input
    let mut buf = String::new();
    std::io::stdin().read_line(&mut buf).expect("Error");

    //
    let test_case_count: usize = buf.trim().parse().unwrap();

    for _ in 0..test_case_count {
        // input line buffer
        let mut input_word_buf = String::new();

        // take input from stdin
        std::io::stdin()
            .read_line(&mut input_word_buf)
            .expect("Error");

        // split the input by space and then retun a vector containing each words
        let words: Vec<&str> = input_word_buf.trim().split(' ').collect();

        // loop through each word
        for w in words {
            // get reversed vertion of current word in loop
            let reversed_word: String = w.chars().rev().collect::<String>();

            // print in style
            print!("{reversed_word} ")
        }
        println!();
    }
}
