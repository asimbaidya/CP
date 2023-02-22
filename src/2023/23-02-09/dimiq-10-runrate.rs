// AC for very first time
// no error occured,  because rust forced strict type annotation so no value got lost
fn main() {
    let mut buf = String::new();
    std::io::stdin().read_line(&mut buf).expect("Could Not T");
    let t: usize = buf.trim().parse().unwrap();

    for _ in 1..=t {
        let mut buf = String::new();
        std::io::stdin().read_line(&mut buf).expect("Could Not T");

        let nums: Vec<i32> = buf
            .trim()
            .split(" ")
            .map(|x| x.parse().expect("Type does not Match!"))
            .collect();

        // given data
        let opn_total_run = nums[0];
        let current_run = nums[1];
        let ball_left = nums[2];

        // inferred
        let ball_played = 300 - ball_left;
        let run_required = opn_total_run - current_run + 1;

        let crr = current_run as f64 / (ball_played as f64 / 6.0);

        // wow. mut not required if only 1 time value assigned/changed after decl
        let rrr;
        if run_required > 0 {
            rrr = run_required as f64 / (ball_left as f64 / 6.0);
        } else {
            rrr = 0.0;
        }

        // CRR, RRR
        println!("{crr:.2} {rrr:.2}");
    }
}
