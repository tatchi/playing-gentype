[@gentype.opaque]
type operation =
  | Add(operation, operation)
  | Sum(operation, operation)
  | Int(int);

[@gentype]
let rec calc = operation =>
  switch (operation) {
  | Add(op1, op2) => calc(op1) + calc(op2)
  | Sum(op1, op2) => calc(op1) * calc(op2)
  | Int(number) => number
  };

[@gentype]
let myint = (i) => Int(i);
[@gentype]
let add = (x, y) => Add(x, y);
[@gentype]
let sum = (x, y) => Sum(x, y);