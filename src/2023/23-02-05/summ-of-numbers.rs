/*
 * Input:
 * N
 * l1
 * l2
 * lN
 *
 * First line take N, then N line takes some integers seperated by random number of spaces, the
 * task is to calculate the sum of all numbers and print them
 * */
// AC on Feb-05-2023

fn main() {
    let mut buf = String::new();

    std::io::stdin().read_line(&mut buf).unwrap();
    let count: usize = buf.trim().parse().unwrap();

    for _ in 1..=count {
        let mut buf = String::new();

        // std::io::stdin().read_line(&mut buf); // todo: why unwrap required ?
        std::io::stdin().read_line(&mut buf).unwrap();

        let nums: Vec<i32> = buf
            .trim()
            .split(" ")
            .map(|s| s.parse().expect("Invalid Type !! Cold not Parse!"))
            .collect();

        let mut sum = 0;
        for num in nums {
            sum += num;
        }

        println!("sum = {sum}");
    }
}
