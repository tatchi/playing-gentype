import { operation, calc, myint, add, sum } from "./Demo.gen";

// const myOp: operation = {
//   tag: "Add",
//   value: [
//     { tag: "Sum", value: [{ tag: "Int", value: 2 }, { tag: "Int", value: 2 }] },
//     { tag: "Int", value: 5 }
//   ]
// };

const myOp: operation = add(sum(myint(2), myint(3)), myint(5));

console.log(calc(myOp));
