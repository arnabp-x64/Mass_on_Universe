# 🌌 Mass_On_Universe

**Mass_On_Universe** is a C++ based Command-line User Interface (CUI) application designed to calculate a user's weight across various celestial bodies in our solar system. It provides an interactive experience using real-time text rendering and precise gravitational calculations.

---

## 🚀 Features

* **Interactive Typewriter Effect:** Uses a custom `tprt` function to simulate real-time typing for a more engaging user experience.
* **Solar System Coverage:** Calculates weight for Mercury, Venus, Mars, Jupiter, Saturn, Uranus, Neptune, and the Moon.
* **Formatted Output:** Utilizes `<iomanip>` to present data in a clean, aligned table format.
* **Session Tracking:** Keeps track of how many times the calculator has been used during a single run.
* **Buffer Management:** Implements input clearing and ignoring to ensure smooth transitions between user prompts.

---

## 🛠️ Technical Details

The program uses the following gravitational constants relative to Earth's gravity (1.0):

| Celestial Body | Gravity Multiplier |
| :--- | :--- |
| **Mercury** | 0.38x |
| **Venus** | 0.91x |
| **Mars** | 0.38x |
| **Jupiter** | 2.34x |
| **Saturn** | 1.06x |
| **Uranus** | 0.92x |
| **Neptune** | 1.19x |
| **Moon** | 0.16x |

### Built With
* **C++11** or higher
* `<chrono>` & `<thread>` for timing and delays.
* `<iomanip>` for output formatting.

---

## 💻 How to Run

### Prerequisites
Ensure you have a C++ compiler installed (like `g++`).

### Compilation
Open your terminal and run:
```bash
g++ Master.cpp -o MassOnUniverse
```
