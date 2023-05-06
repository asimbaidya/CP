use std::io::stdin;

fn main() {
    let mut lines = stdin().lines().map(|line| line.unwrap());

    let test_num: usize = lines.next().unwrap().parse().unwrap();

    for _ in 0..test_num {
        // one
        let nums = lines
            .next()
            .unwrap()
            .split_whitespace()
            .map(|x| x.parse::<i32>().expect("Could not parse"))
            .collect::<Vec<_>>();
        println!("nums = {nums:?}");

        // two
        let nums = lines
            .next()
            .unwrap()
            .split_whitespace()
            // ok returns Option, so useless to use ok :(
            .map(|x| x.parse::<i32>().ok().unwrap())
            .collect::<Vec<_>>();
        println!("nums = {nums:?}");

        // three - unwrap()
        let nums = lines
            .next()
            .unwrap()
            .split_whitespace()
            .map(|x| x.parse::<i32>().unwrap())
            .collect::<Vec<_>>();
        println!("nums = {nums:?}");

        // - shortcut by providing type first
        // I
        let nums: Vec<i32> = lines
            .next()
            .unwrap()
            .split_whitespace()
            .map(|x| x.parse().expect("Could not parse"))
            .collect();
        println!("nums = {nums:?}");

        // I
        let nums: Vec<i32> = lines
            .next()
            .unwrap()
            .split(" ")
            .map(|x| x.parse().unwrap())
            .collect();
        println!("nums = {nums:?}");
    }
}
