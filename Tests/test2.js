function Person(name, age, sex) {
    this.name= name
    this.age= age
    this.sex= sex
}

function Car(make, model, year, owner) {
    this.make= make
    this.model= model
    this.year= year
    this.owner= owner
}

john= new Person("John", 33, "M")
fred= new Person("Fred", 39, "m")
car1= new Car("Eagle", "talon", 1993, john)
car2= new Car("Nissan", "300zx", 1992, fred)
