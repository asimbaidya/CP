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

        // let [x, n] = <[i32; 3]>::try_from(nums).expect("Mis-Match!");
        let [x, n, i] = <[i32; 3]>::try_from(nums).expect("Mis-Match!").clone();

        if x > n {
            println!("Invalid!");
        } else {
            // any better & clear approach to get this value?
            let offset = x % i;
            let start = if offset == 0 { x } else { x + (i - offset) };

            // much better
            let start = (x + i - 1) / i * i;

            for k in (start..=n).step_by(i as usize) {
                println!("{k}");
            }
            println!();
        }
    }
}
