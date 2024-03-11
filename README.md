# LLD-Notes



*Class vs Objects*

OOPS


*Encapsulation*


*Abstraction*


*Inheritance*


*Polymorphism*

** Run Time Polymorphism **

** Compile Time Polymorphism **



*Abstract Classes vs Interface *

-> Extend Abstract Class
-> Implement Interface



```
class A
{
  virtual void func() = 0;
}

```

SOLID Principles

SRP -> Single Responsibility Principle :- Single Reason to Change (Its subjective)
Different levels of SRP
SRP in services(In case of Microservices)

SRP in Classes

SRP in functions 

Open-Closed Principle :- Open for Extension, Closed for modified. (A class should be allowed to extend without modifying the existing code)

Example -> 

```
logger {
  log() {
    if (log == DEBUG) {

    } else if (log == INFO) {

    }
  }

}

```

```
Logger Interface -> 


```

Liskov Subsitution Principle -> Should be able to substitute parent object with child object without breaking the code. (Classic Inheritance example)


Interface Segregation Principle -> You should not force your child classes to extend the methods that they don't need. You should not have fat classes.(smaller more specific class)


Dependecy Inversion Principle -> (Loose Coupling)

''' (High level modules and low level modules should not be tightly coupled)
NotificationMsg {

  if(sms) {
    smsMgr.sendMessage();
  } else if(whatsppa) {
  wtspMgr.sendMessage();
  }
}
'''

S -> Single Responsibility Principle -> Single reason to change
O -> Open Close Principle -> add new feature without changing existing code.
L -> Liskov Subsitution Principle -> Superclas object can be replaced by subclasses
I -> Interface Segregation Principle -> dont force to implement methods. (Make smaller interfaces)
D -> Dependency Inversion -> High level modules should not depend on low level modules. (There should be a abstraction layer)








