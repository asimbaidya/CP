use std::io::{stdin, BufRead};
// alternative element - !

fn main() {
    let mut lines = stdin().lock().lines().map(|line| line.unwrap());

    let test_num: usize = lines.next().unwrap().parse().unwrap();

    // -- split --
    for _ in 0..test_num {
        let num_inputs = lines.next().unwrap();

        let mut i = 0;
        num_inputs.split_whitespace().for_each(|num| {
            i += 1;
            if i % 2 != 0 {
                return;
            }
            print!("{num} ");
        });
        println!()
    }

    // -- index by index --
    for _ in 0..test_num {
        // read array of i32
        let nums: Vec<i32> = lines
            .next()
            .unwrap()
            .split_whitespace()
            .map(|n| n.parse().unwrap())
            .collect();

        // println!("nums = {nums:?}")

        // iterate & check if alternative element
        for (index, val) in nums.iter().enumerate() {
            if index % 2 == 1 {
                print!("{val} ")
            }
        }
        println!()
    }
}
