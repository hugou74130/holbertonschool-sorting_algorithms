<p align="center">
  <a href="" rel="noopener">
    <img width="200px" height="200px" src="https://upload.wikimedia.org/wikipedia/commons/thumb/1/18/C_Programming_Language.svg/1200px-C_Programming_Language.svg.png" alt="C Logo">
  </a>
</p>

<h3 align="center">Holberton School — Sorting Algorithms</h3>

<div align="center">

[![Status](https://img.shields.io/badge/status-completed-success.svg)]()
[![Language](https://img.shields.io/badge/language-C-blue.svg)]()
[![License](https://img.shields.io/badge/license-none-lightgrey)]()

</div>

---

<p align="center"> Implementation and analysis of fundamental sorting algorithms in C.
    <br> 
    <i>Holberton School France — Algorithms & Data Structures</i>
</p>

## 📝 Table of Contents

- [About](#about)
- [Getting Started](#getting_started)
- [Algorithms](#algorithms)
- [Complexity](#complexity)
- [Usage](#usage)
- [Built Using](#built_using)
- [Authors](#authors)
- [Acknowledgements](#acknowledgement)

## 🧐 About <a name = "about"></a>

This repository contains implementations of classic sorting algorithms written in C as part of the Holberton School algorithms and data structures curriculum. Each algorithm includes time complexity analysis (Big O notation).

## 🏁 Getting Started <a name = "getting_started"></a>

### Prerequisites

- GCC compiler
- Betty style linter (for Holberton projects)

### Compiling

```bash
git clone https://github.com/hugou74130/holbertonschool-sorting_algorithms.git
cd holbertonschool-sorting_algorithms
gcc -Wall -Wextra -Werror -pedantic 0-main.c 0-bubble_sort.c print_array.c -o bubble
```

## 🧮 Algorithms <a name = "algorithms"></a>

| Algorithm | File | Description |
|-----------|------|-------------|
| Bubble Sort | `0-bubble_sort.c` | Simple comparison-based sort |
| Insertion Sort | `1-insertion_sort_list.c` | Sorts a doubly linked list |
| Selection Sort | `2-selection_sort.c` | In-place comparison sort |
| Quick Sort | `3-quick_sort.c` | Divide-and-conquer efficient sort |

## 📊 Complexity <a name = "complexity"></a>

Complexity files (Big O notation) are included for each algorithm:

- `0-O` — Bubble Sort complexity
- `1-O` — Insertion Sort complexity
- `2-O` — Selection Sort complexity
- `3-O` — Quick Sort complexity

## 🎈 Usage <a name = "usage"></a>

Run the compiled binary:

```bash
./bubble
```

## ⛏️ Built Using <a name = "built_using"></a>

- [C](https://en.wikipedia.org/wiki/C_(programming_language)) — Programming language
- [GCC](https://gcc.gnu.org/) — Compiler

## ✍️ Authors <a name = "authors"></a>

- [@hugou74130](https://github.com/hugou74130) — Hugex

## 🎉 Acknowledgements <a name = "acknowledgement"></a>

- Holberton School France for the algorithms curriculum
- Donald Knuth's "The Art of Computer Programming"
