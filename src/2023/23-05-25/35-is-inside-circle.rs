fn main() {
    let mut lines = std::io::stdin().lines().map(|line| line.unwrap());

    let test_len: usize = lines.next().unwrap().parse().unwrap();

    for _ in 0..test_len {
        // p1
        let nums: Vec<i32> = lines
            .next()
            .unwrap()
            .split_whitespace()
            .map(|x| x.parse().unwrap())
            .collect();
        let [a1, b1]: [_; 2] = [nums[0], nums[1]];

        let r: i32 = lines.next().unwrap().parse().unwrap();
        let nums: Vec<i32> = lines
            .next()
            .unwrap()
            .split_whitespace()
            .map(|x| x.parse().unwrap())
            .collect();
        let [a2, b2]: [_; 2] = [nums[0], nums[1]];

        let dis = distance(a1, b1, a2, b2);
        println!("({a1},{b1}) <---- {dis} ----> ({a2},{b2})");

        if dis > r as f64 {
            println!("The point is not inside the circle");
        } else if dis < r as f64 {
            println!("The point is inside the circle ");
        }
    }
}

fn distance(a1: i32, b1: i32, a2: i32, b2: i32) -> f64 {
    // black-magic :)
    (((a1 - a2).pow(2) + (b1 - b2).pow(2)) as f64).sqrt()
}
