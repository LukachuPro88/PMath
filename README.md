# PMath

**PMath** is a simple mathematics library specified for **physics engine** mathematic equations and **other repetitive** stuff.

## Features

- **Vector Mathematics:** Optimized 2D and 3D vector structures (`PM_Vec2`, `PM_Vec3`) written entirely inline for zero function-call overhead.
- **Simulation Scaling:** Intuitive, built-in global conversions to seamlessly translate your engine data between real-world meters and pixel simulation spaces.

---

## How to Use

### 1. System Installation (Linux)

To build the library architecture and install the components globally to your system directories, open your terminal and execute:

```bash
mkdir build && cd build
cmake ..
make
sudo make install
```

This deploys the headers natively to `/usr/local/include/` and the static binary (`libpmath.a`) directly to `/usr/local/lib/`.

### 2. Including in C Code

Once installed, you can include the umbrella framework directly into any of your simulation source files using system angle brackets:

```c
#include <pmath.h>
```

### 3. Compilation & Linking

When compiling your simulation executable, make sure to instruct your compiler to link against your math archive alongside your system frameworks:

```cmake
target_link_libraries(your_executable_target PRIVATE pmath m dl)
```

---

## Contributing

Please check out our code guidelines inside the [CONTRIBUTING.md](CONTRIBUTING.md) documentation before submitting pull requests!

## License

This project is licensed under the terms of the MIT License.
