// AC on 05-02-2023
// https://dimikoj.com/problems/8/small-to-large

fn main() {
    let mut buf = String::new();

    std::io::stdin().read_line(&mut buf).unwrap();
    let count: usize = buf.trim().parse().unwrap();

    for _ in 1..=count {
        let mut buf = String::new();

        std::io::stdin().read_line(&mut buf).unwrap();

        let nums: Vec<i32> = buf
            .trim()
            .split(" ")
            .map(|s| s.parse().expect("Invalid Type !! Cold not Parse!"))
            .collect();

        let (mut a, mut b, mut c) = (nums[0], nums[1], nums[2]);

        // shit way because could have just sort the result
        if b < a {
            // now a is smaller than b
            let t = a;
            a = b;
            b = t;
        }
        if c < a {
            // now a is smaller than c
            let t = a;
            a = c;
            c = t;
        }
        if c < b {
            // now b is smaller than c
            let t = b;
            b = c;
            c = t;
        }

        println!("{a} {b} {c}");
    }
}
