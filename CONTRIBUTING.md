# Contributing to PMath

Thank you for taking the time to contribute! Because `PMath` is structured to keep physics simulation pipelines clean, fast, and lightweight, we prioritize **predictability**, **performance**, and **strict architectural consistency**.

Please review the guidelines below to ensure your contributions align seamlessly with the rest of the library ecosystem.

---

## Architectural Principles

Before writing code, keep our core layout strategies in mind:

1. **Header-Only Performance for Vector Math:** All vector manipulation utilities (`pm_vec2.h`, `pm_vec3.h`) must be written entirely inline using the `static inline` modifier. Do not create separate `.c` source files for standard coordinate math. We want the compiler to inject these routines directly into the loops without stack frames.
2. **Global Simulation States Go in Sources:** State allocations, configuration flags, or variables that require explicit memory addresses across multiple compilation units (like `PM_SCALE` or `PM_GRAVITY`) belong inside `pm_units.h` as an `extern` and must be defined inside `src/pm_units.c`.
3. **Strict C11 Standards:** All contributions must comply with clean, standard C11 logic. Avoid compiler-specific extensions (like GCC or Clang specifics) to ensure cross-platform compiler viability.

---

## Development Workflow

### 1. Code Style Guidelines

- **Naming Conventions:** All public structs, functions, macros, and global variables must be explicitly prefixed with `PM_` or `pm_` to prevent namespace collisions in external applications.
- **Function Documentation:** Every new function definition must be preceded by a clean Doxygen-style comment block outlining its behavior, parameter specs, and return attributes:

```c
/**
 * @brief Briefly describes what the utility calculates.
 *
 * @param a Description of the first vector parameter.
 * @return Description of the output vector.
 */
```

### 2. Testing Your Changes Locally

Before submitting your updates, make sure your changes don't break downstream simulations. You can test your local source additions directly by jumping into your build folder and rebuilding the archive target:

```bash
cd build
cmake ..
make
```

### 3. Submitting a Pull Request

1. Fork the repository and create an isolated feature branch (`git checkout -b feature/amazing-new-math`).
2. Commit your code modifications with logical, descriptive messages (`git commit -m "Add 2D vector reflection physics utility"`).
3. Push your changes up to your remote branch and open a Pull Request targeting the `main` branch.

We will review your mathematical algorithms, validation parameters, and performance structures as fast as possible!
