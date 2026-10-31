
#[path = "oops/oops.rs"]
mod oops;

#[path = "number/array.rs"]
mod array;

#[path = "pattern/pattern.rs"]
mod pattern;


use oops :: Planet;
use array :: Arraysets;
use pattern :: *;


fn main() {
    let earth = Planet {
        co2: 0.04,
        nitorgen: 78.08,
    };

    let arr = Arraysets {
        arr: [1, 2, 3, 4, 5],
    };

    hollow_square(5);
    pyramid(5);

    println!("{:?}", arr.arr);
    println!("{:?}, {:?}", earth.co2, earth.nitorgen);
}