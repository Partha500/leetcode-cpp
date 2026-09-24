# ⚡ LeetCode Solutions in C++

> A clean, structured, and production-ready repository tracking algorithmic problem-solving practice, optimal data structures, and Big-O complexity analysis in **C++20**.

---

## 📁 Repository Architecture

The repository is organized categorically by topic to streamline pattern recognition and problem lookup:

```
leetcode-cpp/
├── Arrays/
│   ├── 0121_best_time_to_buy_and_sell_stock.cpp
│   ├── 0136_single_number.cpp
│   ├── 0169_majority_element.cpp
│   ├── 0229_majority_element_ii.cpp
│   └── 2965_find_missing_and_repeated_values.cpp
├── Matrix/
│   ├── 0054_spiral_matrix.cpp
│   ├── 1572_matrix_diagonal_sum.cpp
│   └── 2022_convert_1d_array_into_2d_array.cpp
└── README.md
```

---

## 📊 Problem Tracker

| # | Problem Title | Category | Difficulty | Solution | Time Complexity | Space Complexity | Key Technique |
| :-: | :--- | :--- | :-: | :-: | :-: | :-: | :--- |
| 54 | [Spiral Matrix](https://leetcode.com/problems/spiral-matrix/) | Matrix | 🟡 Medium | [0054_spiral_matrix.cpp](Matrix/0054_spiral_matrix.cpp) | $\mathcal{O}(M \times N)$ | $\mathcal{O}(1)$ | 4-Pointer Boundary Traversal |
| 121 | [Best Time to Buy and Sell Stock](https://leetcode.com/problems/best-time-to-buy-and-sell-stock/) | Arrays | 🟢 Easy | [0121_best_time_to_buy_and_sell_stock.cpp](Arrays/0121_best_time_to_buy_and_sell_stock.cpp) | $\mathcal{O}(N)$ | $\mathcal{O}(1)$ | Single-Pass Min Tracking |
| 136 | [Single Number](https://leetcode.com/problems/single-number/) | Arrays | 🟢 Easy | [0136_single_number.cpp](Arrays/0136_single_number.cpp) | $\mathcal{O}(N)$ | $\mathcal{O}(1)$ | Bitwise XOR Operation |
| 169 | [Majority Element](https://leetcode.com/problems/majority-element/) | Arrays | 🟢 Easy | [0169_majority_element.cpp](Arrays/0169_majority_element.cpp) | $\mathcal{O}(N)$ | $\mathcal{O}(1)$ | Boyer-Moore Voting Algorithm |
| 229 | [Majority Element II](https://leetcode.com/problems/majority-element-ii/) | Arrays | 🟡 Medium | [0229_majority_element_ii.cpp](Arrays/0229_majority_element_ii.cpp) | $\mathcal{O}(N)$ | $\mathcal{O}(1)$ | Extended Boyer-Moore Voting |
| 1572 | [Matrix Diagonal Sum](https://leetcode.com/problems/matrix-diagonal-sum/) | Matrix | 🟢 Easy | [1572_matrix_diagonal_sum.cpp](Matrix/1572_matrix_diagonal_sum.cpp) | $\mathcal{O}(N)$ | $\mathcal{O}(1)$ | Single-Pass Diagonal Traversal |
| 2022 | [Convert 1D Array Into 2D Array](https://leetcode.com/problems/convert-1d-array-into-2d-array/) | Matrix | 🟢 Easy | [2022_convert_1d_array_into_2d_array.cpp](Matrix/2022_convert_1d_array_into_2d_array.cpp) | $\mathcal{O}(M \times N)$ | $\mathcal{O}(1)$ | Index Mapping `[i / n][i % n]` |
| 2965 | [Find Missing and Repeated Values](https://leetcode.com/problems/find-missing-and-repeated-values/) | Arrays | 🟢 Easy | [2965_find_missing_and_repeated_values.cpp](Arrays/2965_find_missing_and_repeated_values.cpp) | $\mathcal{O}(N^2)$ | $\mathcal{O}(N^2)$ | Grid Frequency Hashing |

---

## 🛠️ How to Run Locally

To compile and test any solution locally using a modern C++ compiler (`g++` or `clang++`):

```bash
# Example: Compile Spiral Matrix solution
g++ -std=c++17 -O2 Matrix/0054_spiral_matrix.cpp -o solution
./solution
```

---

## 💡 Code & Quality Standards

- **Modern C++20 Practices**: Code includes explicit header files, namespace usage, standard algorithms, and safe vector indexing.
- **Complexity Focus**: Optimized algorithms aiming for $\mathcal{O}(1)$ auxiliary space and linear $\mathcal{O}(N)$ time complexity wherever possible.
- **Documentation**: Standardized file headers for every problem detailing difficulty, category, problem links, and step-by-step intuition.

---

## 👤 Author

**Partha Pratim Choudhury**  
- 🌐 **GitHub**: [@Partha500](https://github.com/Partha500)  
- 💼 **LinkedIn**: [partha-choudhury-dev](https://www.linkedin.com/in/partha-choudhury-dev)
