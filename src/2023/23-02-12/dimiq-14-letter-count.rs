fn main() {
    let mut buf = String::new();
    std::io::stdin().read_line(&mut buf).unwrap();
    let test: usize = buf.trim().parse().unwrap();

    for _ in 0..test {
        let mut buf = String::new();
        std::io::stdin().read_line(&mut buf).unwrap();

        let line = buf.trim();

        let mut buf = String::new();
        std::io::stdin().read_line(&mut buf).unwrap();

        let ch = buf.trim().chars().next().unwrap();

        // solution 1
        // count occurence of ch in line
        // let count = line.chars().filter(|&c| c == ch).count();
        // println!("{}", count)

        // // solution 2
        let mut count = 0;
        for l_ch in line.chars() {
            if l_ch == ch {
                count += 1;
            }
        }

        if count == 0 {
            println!("'{ch}' is not present");
        } else {
            println!("Occurrence of '{ch}' in 'hello world' = {}", count)
        }

        // solution 3
        // let mut count = 0;
        // for l_ch in line.to_string().chars() {
        //     if l_ch == ch {
        //         count += 1;
        //     }
        // }
        // println!("{} ", count)
    }
}
