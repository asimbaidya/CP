use std::io::stdin;

fn main() {
    let mut lines = stdin().lines().map(|line| line.unwrap());

    let test_case: usize = lines.next().unwrap().parse().unwrap();
    for _ in 0..test_case {
        let arr_size: usize = lines.next().unwrap().parse().unwrap();

        let mut nums = vec![0 as i32; arr_size];

        for i in 0..arr_size {
            let num: i32 = lines.next().unwrap().parse().unwrap();
            nums[i] = num;
        }

        let mut flag = true;
        for i in 1..nums.len() {
            if nums[i] < nums[i - 1] {
                flag = false;
                break;
            }
        }

        if flag {
            println!("YES");
        } else {
            println!("NO")
        }
    }
}
