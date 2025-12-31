# 📊 BMI Calculator in C

A lightweight and efficient Command-Line Interface (CLI) application built in **C** to calculate the **Body Mass Index (BMI)**. This tool is designed for **Linux** environments and provides immediate health classification based on user input.

---

## 🛠 Features

* **Flexible Inputs:** Supports both **Centimeters (cm)** and **Meters (m)** for height.
* **Health Analysis:** Categorizes results into Underweight, Normal, Overweight, or Obese.
* **Terminal Optimization:** Uses `system("clear")` for a smooth, distraction-free UI on Linux.
* **Input Validation:** Prevents program crashes when non-numeric characters are entered.
* **Bilingual Support:** Interface includes both **English** and **Italian** terms.

---

## 📐 BMI Classification

The program calculates the index using the formula: 

The results are categorized according to World Health Organization (WHO) standards:

| BMI Range | Category |
| --- | --- |
| **Below 18.5** | Underweight |
| **18.5 – 24.9** | Normal weight |
| **25.0 – 29.9** | Overweight |
| **30.0 and Above** | Obese |

---

## 🚀 Getting Started

### Prerequisites

* A Linux-based system (Ubuntu, Fedora, Debian, etc.) or **Termux** on Android (since you use a Pixel 8 Pro).
* **GCC** (GNU Compiler Collection).

### Installation & Execution

1. **Clone the repository:**
```bash
git clone https://github.com/yourusername/bmi-calculator-c.git
cd bmi-calculator-c

```


2. **Compile the code:**
```bash
gcc main.c -o bmi_calc

```


3. **Run the program:**
```bash
./bmi_calc

```



---

## 📝 Technical Notes

* **Language:** C
* **OS Compatibility:** Linux/Unix (uses `system("clear")`)
* **Key Logic:** Uses `float` precision for accurate calculations and `do-while` loops for continuous user interaction.

---
