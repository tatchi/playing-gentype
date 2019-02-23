[@gentype]
type schoolPerson =
  | Teacher
  | Director
  | Student(string);

[@gentype]
let greeting = person =>
  switch (person) {
  | Teacher => "Hey Professor!"
  | Director => "Hello Director."
  | Student("Richard") => "Still here Ricky?"
  | Student(anyOtherName) => "Hey, " ++ anyOtherName ++ "."
  };

[@gentype]
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

// let myOp = Add(Sum(Int(2), Int(2)), Int(5));

// let result = calc(myOp);
