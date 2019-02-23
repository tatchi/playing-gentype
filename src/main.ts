import { greeting, schoolPerson, operation, calc } from "./Demo.gen";

const student: schoolPerson = { tag: "Student", value: "samih" };
const director: schoolPerson = "Director";

console.log(greeting(student));
console.log(greeting(director));

const myOp: operation = {
  tag: "Add",
  value: [
    { tag: "Sum", value: [{ tag: "Int", value: 2 }, { tag: "Int", value: 2 }] },
    { tag: "Int", value: 5 }
  ]
};

console.log(
  calc(myOp)
);
