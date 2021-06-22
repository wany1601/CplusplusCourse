# 1. Class and Object

## 1.1 What is Class and Object

Before we create anything in the world, we first have to design it. For example car designers first has to draw the blueprint of a car and then the factory can manufacture thousands of real cars based on the blue print. We say the blueprint is kind of `abstract` because there is no real car if you only has a blueprint. The the real cars that manufactured based on the blueprint are kind of `real` because they are real things, a red one, a blue one, a black one and so on, and people can drive them. 

 In OOP, we the two main concepts are `class` and `object`. Class is like a blueprint, that is abstract, but contains all the attributes and the behaviors, and the object is real, it is created based on the blueprint. 

For example, we can first create a class `Car`, that contains `attributes` color, travel distance and so on, `attributes` are the features that we care about a car, which is also called as `data member`. Data members can be different from one class to another. For example, For a User Class, we want to save some attribute of a person, if the system is used by a School System, it may contain the name of the user, the password of a user, and the registered date. But for a hospital, it may also requires a User class, that may contains also the allergies, blood type and so on. Attributes are usually nouns.

A class also contains some behaviors, for example, when a car is designed, the designer must also consider what will happen if the driver presses the accelerate pedal, and what will happen if the driver presses the break pedal. In a class, these behaviors are called `member functions` or `methods`. Different from normal functions, member functions (methods) are defined in a class. For example, if a Car class contains a method `accelateSpeed()`, you can only access to this method through the class (object of the class), that is to say, a car can `accelateSpeed()`, but not a Table or a Cat.

