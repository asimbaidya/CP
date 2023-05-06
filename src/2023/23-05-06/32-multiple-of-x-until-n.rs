use std::io::stdin;

fn main() {
    let mut lines = stdin().lines().map(|line| line.unwrap());

    let test_num: usize = lines.next().unwrap().parse().unwrap();

    for _ in 0..test_num {
        let nums = lines
            .next()
            .unwrap()
            .split_whitespace()
            .map(|x| x.parse::<i32>().expect("Could not parse"))
            .collect::<Vec<_>>();

        // let [x, n] = <[i32; 2]>::try_from(nums).expect("Mis-Match!");
        let [x, n] = <[i32; 2]>::try_from(nums).expect("Mis-Match!").clone();

        if x > n {
            println!("Invalid!");
        } else {
            for i in (x..=n).step_by(x as usize) {
                println!("{i}");
            }
        }
    }
}
