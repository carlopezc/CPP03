# 🚀 CPP Module 03

> This module focuses on Inheritance in C++, exploring how classes can derive attributes and behaviors from one another to promote code reuse and hierarchical organization.

---

## 🎯 Project Goals

The goal of this module is to implement a series of classes that represent different types of "Claptrap" robots. Through this, we explore the concept of **Inheritance**, learning how to extend base classes into derived classes, manage access levels with `protected`, and understand the order of construction and destruction in a class hierarchy.

## 🛠️ Technical Details

* **Inheritance:** Creating derived classes (`ScavTrap`, `FragTrap`) that inherit properties from a base class (`ClapTrap`).
* **Access Specifiers:** Understanding the difference between `public`, `private`, and `protected` to control member visibility in derived classes.
* **Constructor/Destructor Chaining:** Observing how the base class constructor is called before the derived one, and the reverse order for destructors.
* **Method Overriding:** Redefining base class functions in derived classes to provide specific behaviors while maintaining the same signature.
* **Attributes Shadowing:** Learning how to manage and avoid conflicts when a derived class has attributes with the same name as the base class.

## ⚙️ How to Compile & Run

This project contains a separate `Makefile` inside each exercise directory (e.g., `ex00/`, `ex01/`).

1.  Clone the repository:
    ```bash
    git clone [https://github.com/carlopezc/CPP03.git](https://github.com/carlopezc/CPP03.git)
    cd CPP03
    ```
2.  To compile and run a specific exercise, navigate into its folder:

    **Example (ex00):**
    ```bash
    cd ex00
    make
    ./claptrap
    ```
