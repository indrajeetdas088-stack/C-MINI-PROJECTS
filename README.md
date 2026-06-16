# 🛠️ My C Programming Playground

Welcome to my repository! This is a collection of mini-projects I am building from scratch as I learn the fundamentals of C programming. Instead of just writing theoretical code, I'm focusing on building real, interactive console programs.

---

## 🚀 What's Inside?

| Project Folder | Description | What I Learned / Focused On |
| :--- | :--- | :--- |
| **`SIMPLE CALCULATOR`** | A robust 4-function calculator. | Input buffering (`scanf(" %c")`), basic `switch-case` structures, and defensive error checking (preventing division-by-zero crashes!). |
| **`ATM MACHINE SIMULATOR`** | A console-based banking interaction simulation. | State management, conditional logic flow, and working with mathematical balances. |
| **`MOVIE TICKET GENERATOR`** | An interactive ticket booking and layout program. | String outputs, basic logic branching, and formatting clean user menus. |
| **`CUBE CALCULATOR PROGRAM`** | Multi-dimensional volume calculation. | Variable math operations and precision formatting. |
| **`SIMPLE INTEREST CALCULATOR`** | Quick algebraic computation tool. | Financial formulas handled via data streams. |
| **`The Project - KDA`** | Custom logic application. | Procedural code execution and formatting. |

---

## 🪵 Developer's Log & Defeated Bugs

Every programmer hits a wall; here are a few iconic bugs I managed to track down and squash while building these:

*   **The Memory Spiller (Calculator):** Discovered the hard way that passing `%lf` inside a `scanf` to a standard `float` variable corrupts adjacent memory! Switched my core calculations over to standard `double` types to keep precision flawless.
*   **The Phantom '0.00' (Division by Zero):** Learned how control flow works in a `switch` statement. Restructured my logic so that dividing by zero catches the error and stops the computation *before* printing a fake `0.00` result to the user.

---

## ⚙️ How to Run

To compile and run any of these projects locally on your machine using a GCC compiler, navigate to the specific folder and run:

gcc main.c -o program
./program
