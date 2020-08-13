class Person {
    constructor(private name: string) {}

    sayHello(): string {
        return `${this.name} says hello!!`;
    }
}

let newPerson = new Person('Gaurav Saini');
console.log(newPerson.sayHello());