# Object Oriented Programming

## Principles

- [Abstraction](#abstraction)
- [Encapsulation](#encapsulation)
- [Inheritance](#inheritance)
- [Polymorphism](#polymorphism)

### Abstraction

**Abstraction is used to hide background details or any unnecessary implementation of the data
so that users only see the required information.**

Let us take an example of a Car, user can only see the outer layer of the Car, all the mechanism
of the Car is hidden inside the Car. User don't need to know about how the Car is working form
the inside.

```c
printf()
```

Function can also be an example of Abstraction

### Encapsulation

**Encapsulation is a way to restrict the direct access to the components of an object, so that user
cannot access state value for all of the variables of a particular object.**

Encapsulation can be used to hide both data members and data functions associated with a class or object.

```c
class MyClass {
    private:
    int privateDate;

    public:
    int publicFunction();
}
```

### Inheritance

**Inheritance allows to create classes that are built upon existing classes.**

### Polymorphism

**Polymorphism is an object-oriented programming (OOP) concept that refers to the ability of a variable,
function or object to take on multiple forms.**

A language that features polymorphism allows developers
to access objects of different types through the same interface.
