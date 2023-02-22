// so basically then a number x is constructed using only 5, we get n five for `x = 5**n` 5 in its prime
// facotr, eg 25 = 5^2 => 2
//  125 => 5^3
//  and ffor number greater than 5, after increase of 5, we get one extra facot, from
//  thiese sequence 5,10,15,20,30,35,40 ...
//  so doing num /= 5 while num >= 5 is just doing this ?
use std::u128;

fn zero_count_at_end(n: u128) -> u128 {
    let mut result = 0;
    let mut num = n;

    while num >= 5 {
        num /= 5;
        result += num;
    }
    return result;
}

fn main() {
    let mut buf = String::new();
    std::io::stdin()
        .read_line(&mut buf)
        .expect("Could not read line");

    let total_test: usize = buf.trim().parse().unwrap();

    for n in 0..total_test {
        // let mut buf = String::new();
        // std::io::stdin()
        //     .read_line(&mut buf)
        //     .expect("Could not read line");
        //
        // let num: u128 = buf.trim().parse().unwrap();
        // println!("zero_count_at_end({}) = {}", num, zero_count_at_end(num));

        println!(
            "zero_count_at_end({}) = {}",
            n,
            zero_count_at_end(n as u128)
        );
    }
}
