# rust

## 27-arm-strong-number.rs

```rust
fn main() {
    let digits = "1234324".to_string();
    let p: u32 = digits.len() as u32;

    // iterate through each char
    // convert each char to digit
    // raise power p to each converte digit
    // adds up all pow(n,p)
    let digit_power_sum: u32 = digits.chars().map(|n| n.to_digit(10).unwrap().pow(p)).sum();
}
```
