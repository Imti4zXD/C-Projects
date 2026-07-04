# 🧮 Simple Calculator in C


\

A lightweight, menu-driven calculator built in C. This project demonstrates core programming concepts such as functions, control flow, type casting, and basic error handling.

---

## 📷 Preview

```
-----------------------------------
Welcome to simple Calculator

Choose one of the following options:
1. Add
2. Subtract
3. Multiply
4. Divide
5. Modulus
6. Power
7. Exit
```

---

## 🚀 Features

* ✔️ Basic arithmetic operations
* ✔️ Division with zero protection
* ✔️ Modulus with error handling
* ✔️ Power calculation using `math.h`
* ✔️ Continuous loop until exit
* ✔️ Clean and simple CLI interface

---

## 🛠️ Tech Stack

* Language: **C**
* Library: **math.h**

---

## 📦 Getting Started

### 1. Clone the repository

```bash
git clone https://github.com/Imti4zXD/simple-c-calculator.git
cd simple-c-calculator
```

---

### 2. Compile the program

```bash
gcc main.c -o calculator -lm
```

> ⚠️ `-lm` links the math library (required for `pow()`)

---

### 3. Run the program

```bash
./calculator
```

---

## ⚙️ How It Works

1. User selects an operation from the menu
2. Inputs two numbers
3. Program performs the calculation
4. Result is displayed
5. Loop continues until user selects **Exit**

---

## ⚠️ Limitations

* Modulus (`%`) works on **integers only**
* Floating-point values are **automatically cast to integers** for modulus
* No validation for non-numeric input (e.g., letters)

---

## 🧠 Function Breakdown

| Function         | Description                      |
| ---------------- | -------------------------------- |
| `print_menu()`   | Displays menu options            |
| `division(a, b)` | Handles division with zero check |
| `modulus(a, b)`  | Handles modulus with zero check  |

---

## 🔧 Future Improvements

* [x] Input validation (prevent crashes on invalid input)
* [ ] Improve UI/UX formatting
* [ ] Add history of calculations
---

## 📁 Project Structure

```
.
├── main.c
└── README.md
```

---

## 📄 License

This project is open-source and available for learning and educational purposes.

---

## 👤 Author

**Imtiaz Khan**
Aspiring developer focused on building practical C projects.

---

## ⭐ Support

If you found this helpful:

* Star ⭐ the repository
* Fork 🍴 it and improve it
* Share it with others

---
