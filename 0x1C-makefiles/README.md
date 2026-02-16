0x1C. Makefiles
===============

This project practices **Makefiles** in C (and optionally Python): writing rules to build targets, use variables (`CC`, `CFLAGS`, etc.), and define phony targets like `all`, `clean`, `fclean`, `re`. You may also use Make for scripting (e.g. run a Python script).

Tasks
-----

**Task numbers:** 0, 1, 2, 3, 4, 5, 100

### 0. Makefile (basic)

mandatory

Create a Makefile that builds an executable from source. Define a rule for the main target.

**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x1C-makefiles`
-   File: `0-Makefile`

### 1. Makefile (variables)

mandatory

Create a Makefile that uses variables for the compiler and flags (CC, CFLAGS, etc.).

**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x1C-makefiles`
-   File: `1-Makefile`

### 2. Makefile (multiple targets)

mandatory

Create a Makefile that builds multiple targets. Define rules for each.

**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x1C-makefiles`
-   File: `2-Makefile`

### 3. Makefile (clean, fclean, re)

mandatory

Create a Makefile that defines phony targets clean, fclean, re. clean removes object files; fclean removes objects and executable; re rebuilds everything.

**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x1C-makefiles`
-   File: `3-Makefile`

### 4. Makefile (advanced)

mandatory

Create a Makefile with more advanced rules (e.g. automatic dependencies, multiple sources).

**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x1C-makefiles`
-   File: `4-Makefile`

### 5. Island perimeter (Python + Makefile)

mandatory

Create a Makefile that runs a Python script (e.g. 5-island_perimeter.py). The script may implement the island perimeter problem. Run via make.

**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x1C-makefiles`
-   File: `5-island_perimeter.py`, `5-main.py`

### 100. Makefile (full)

mandatory

Create a complete Makefile that builds a C project with all standard targets (all, clean, fclean, re, etc.) and correct variables.

**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x1C-makefiles`
-   File: `100-Makefile`

---

**How to run / test**

1. Run `make` and verify the expected binaries are created.
2. Run `make clean` and `make re` and check they behave as required.

**Resources**

- [GNU Make manual](https://www.gnu.org/software/make/manual/)
- [Makefile tutorial (rules, variables, phony targets)](https://www.gnu.org/software/make/manual/html_node/Introduction.html)
