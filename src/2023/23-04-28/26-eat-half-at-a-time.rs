// AC
use std::io::stdin;

fn main() {
    let mut lines = stdin().lines().map(|line| line.unwrap());
    let test_num: usize = lines.next().unwrap().parse().unwrap();

    for i in 0..test_num {
        let num: f64 = lines.next().unwrap().parse().unwrap();

        // giving equal rights to both function as they both does same thing :)
        if i % 2 == 0 {
            println!("Expedition time: {}", gupi_bow(num));
        } else {
            println!("Expedition time: {}", gupi_bow_rocks(num));
        }
    }
}

fn gupi_bow(n: f64) -> i32 {
    println!("n = {n}");

    if n < 1.0 {
        println!("ENDGAME@ n = {n}");
        0
    } else {
        1 + gupi_bow(n / 2.0)
    }
}

fn gupi_bow_rocks(n: f64) -> i32 {
    println!("n = {n}");

    // :(
    // at the eod - both mean same thing! but above one is more elegant, isn't it?
    // :)
    if (n / 2.0) < 1.0 {
        println!("ENDGAME@ n = {n}");
        1
    } else {
        1 + gupi_bow_rocks(n / 2.0)
    }
}
