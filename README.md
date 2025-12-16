# 🔐 SimpleLoginSystem

A simple C++ console program that asks the user for a **username** and **password**, validates them, and allows up to **3 login attempts** before blocking the account.

## 💡 Features
- Requests username and password from the user  
- Allows **3 attempts** before blocking the account  
- Provides feedback for:
  - ❌ Wrong username  
  - ❌ Wrong password  
  - ✅ Successful login  
- Beginner-friendly and clean C++ code  

## ⚙️ How to Run
1. Clone or download this project:  
   `git clone https://github.com/wdemirkoll/SimpleLoginSystem.git`
2. Open a terminal in the project directory.  
3. Compile the program:  
   `g++ main.cpp -o login`
4. Run it:  
   `./login`

## 🧩 Code Overview
- **Username Check** → Compares user input with stored username  
- **Password Check** → Compares user input with stored password  
- **Attempt Tracking** → Decrements attempts on wrong input  
- **Final Output** → Prints login success or account blocked message  

## 🧑‍💻 Author
**wdemirkoll**  
[@wdemirkoll](https://github.com/wdemirkoll)  
Created: December 2025  

⭐ If you like this project, consider giving it a star!
