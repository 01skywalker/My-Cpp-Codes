# My C++ Codes

A collection of C++ programs I write while learning and practising **data structures, algorithms, and the C++ Standard Template Library (STL)**. Each file is a standalone program that can be compiled and run on its own.

## Contents

### Sorting Algorithms
| File | Description |
|------|-------------|
| `bubbleSort.cpp` | Bubble sort |
| `selectionSort.cpp` | Selection sort |
| `insertionSort.cpp` | Insertion sort |
| `sort.cpp` | Using `std::sort` |
| `custom_comparator.cpp` | Writing custom comparators for sorting |

### Searching
| File | Description |
|------|-------------|
| `binarySearchAlgorithm.cpp` | Binary search |
| `bookAllocationProblem.cpp` | Book allocation problem |
| `linear_search_algorithm.cpp` | Linear Search |

### Data Structures
| File | Description |
|------|-------------|
| `SinglyLinkedList.cpp` | Singly linked list implementation |

### STL Containers
| File | Description |
|------|-------------|
| `vector.cpp` | `std::vector` basics |
| `vectorFunctions.cpp` | Commonly used vector functions |
| `list.cpp` | `std::list` |
| `stack.cpp` | `std::stack` |
| `stack_operations.cpp` | Stack operations and examples |
| `queue.cpp` | `std::queue` |
| `priority_queue.cpp` | `std::priority_queue` |
| `set.cpp` | `std::set` |
| `map.cpp` | `std::map` |
| `multi_map.cpp` | `std::multimap` |
| `unordered_map.cpp` | `std::unordered_map` |
| `pair.cpp` | `std::pair` |
| `iterators.cpp` | Working with iterators |

### Algorithms and Problems
| File | Description |
|------|-------------|
| `fibonacci.cpp` | Fibonacci sequence |
| `binary_exponentiation.cpp` | Fast exponentiation (binary exponentiation) |
| `maxWaterBFA.cpp` | Max water container, brute-force approach |
| `maxWaterOptimised.cpp` | Max water container, optimised approach |
| `next_permutation.cpp` | Using `std::next_permutation` |
| `other_algorithms.cpp` | Other useful STL algorithms |

### Notes
| File | Description |
|------|-------------|
| `map.excalidraw` | Excalidraw diagram for notes on maps (open at [excalidraw.com](https://excalidraw.com)) |

## Getting Started

### Prerequisites
[Clang](https://clang.llvm.org/) (`clang++`) with C++20 support. All programs here are compiled with `clang++`.

### Clone the repository
```bash
git clone https://github.com/01skywalker/My-Cpp-Codes.git
cd My-Cpp-Codes
```

### Compile and run
```bash
mkdir -p build
clang++ -std=c++20 -Wall -Wextra -Wshadow -Wconversion -pedantic -g \
    -fcolor-diagnostics bubbleSort.cpp -o build/bubbleSort
./build/bubbleSort
```

Replace `bubbleSort.cpp` (and the output name) with any file from the list above.

The flags used:

| Flag | Purpose |
|------|---------|
| `-std=c++20` | Use the C++20 standard |
| `-Wall -Wextra` | Enable common and extra warnings |
| `-Wshadow` | Warn when a variable shadows another |
| `-Wconversion` | Warn about implicit type conversions that may lose data |
| `-pedantic` | Enforce strict standard compliance |
| `-g` | Include debug information |
| `-fcolor-diagnostics` | Coloured compiler output |

### Helper script (optional)

To compile and run a file in one step, save this as `run.sh`, make it executable with `chmod +x run.sh`, and use `./run.sh bubbleSort.cpp`. Binaries go into a `build/` folder.

```bash
#!/bin/bash

file="$1"
BUILD_DIR="build"

mkdir -p "$BUILD_DIR"

filename=$(basename "$file")
output="$BUILD_DIR/${filename%.*}"

if [[ "$file" == *.cpp ]]; then
    clang++ \
        -std=c++20 \
        -Wall \
        -Wextra \
        -Wshadow \
        -Wconversion \
        -pedantic \
        -g \
        -fcolor-diagnostics \
        "$file" \
        -o "$output" \
    && "./$output"
else
    echo "Unsupported file type"
    exit 1
fi
```

If you use this setup, add `build/` to your `.gitignore` so compiled binaries don't get committed.

### Using VS Code tasks (optional)

If you use VS Code, you can compile and run the currently open file with a single shortcut by adding a build task. Create `.vscode/tasks.json` in the project root with the following:

```jsonc
{
  "version": "2.0.0",
  "tasks": [
    {
      "label": "Compile and Run C++",
      "type": "shell",
      "command": "mkdir -p \"${workspaceFolder}/build\" && clang++ -std=c++20 -Wall -Wextra -Wshadow -Wconversion -pedantic -g -fcolor-diagnostics \"${file}\" -o \"${workspaceFolder}/build/${fileBasenameNoExtension}\" && \"${workspaceFolder}/build/${fileBasenameNoExtension}\"",
      "options": {
        "cwd": "${fileDirname}",
        "shell": {
          "executable": "/usr/bin/fish",
          "args": [
            "-c"
          ]
        }
      },
      "group": {
        "kind": "build",
        "isDefault": true
      },
      "presentation": {
        "reveal": "always",
        "panel": "shared",
        "clear": true,
        "echo": false,
        "focus": true,
        "showReuseMessage": false
      },
      "problemMatcher": []
    }
  ]
}
```

Open any `.cpp` file and press `Ctrl+Shift+B` (`Cmd+Shift+B` on macOS). The task compiles the file into `build/` and runs it in the integrated terminal.

> **Note:** the task is set to use `fish` as its shell (`/usr/bin/fish`). If you don't have fish installed, delete the whole `"shell"` block inside `"options"` to fall back to your default shell, or point `"executable"` to another shell such as `/bin/bash`.

#### Windows users

The task above uses Linux/macOS commands (`mkdir -p`, `&&`, no `.exe` extension), so on Windows use this PowerShell version of `.vscode/tasks.json` instead:

```jsonc
{
  "version": "2.0.0",
  "tasks": [
    {
      "label": "Compile and Run C++",
      "type": "shell",
      "command": "New-Item -ItemType Directory -Force -Path \"${workspaceFolder}/build\" | Out-Null; clang++ -std=c++20 -Wall -Wextra -Wshadow -Wconversion -pedantic -g -fcolor-diagnostics \"${file}\" -o \"${workspaceFolder}/build/${fileBasenameNoExtension}.exe\"; if ($?) { & \"${workspaceFolder}/build/${fileBasenameNoExtension}.exe\" }",
      "options": {
        "cwd": "${fileDirname}",
        "shell": {
          "executable": "powershell.exe",
          "args": [
            "-NoProfile",
            "-Command"
          ]
        }
      },
      "group": {
        "kind": "build",
        "isDefault": true
      },
      "presentation": {
        "reveal": "always",
        "panel": "shared",
        "clear": true,
        "echo": false,
        "focus": true,
        "showReuseMessage": false
      },
      "problemMatcher": []
    }
  ]
}
```

What's different from the Linux/macOS version:

- `New-Item -ItemType Directory -Force` replaces `mkdir -p`.
- The output file gets an explicit `.exe` extension.
- `;` and `if ($?)` replace `&&`, because Windows PowerShell 5.1 doesn't support `&&`. The program only runs if compilation succeeds.
- The shell is `powershell.exe` instead of `fish`.

To get `clang++` on Windows, use the Clang build from [WinLibs](https://winlibs.com/):

1. Download a WinLibs release that includes LLVM/Clang and extract it somewhere permanent (for example `C:\winlibs`).
2. Add the extracted `mingw64\bin` folder to your `PATH`.
3. Open a new terminal and check that it works with `clang++ --version`.

WinLibs bundles the MinGW-w64 headers and libraries that Clang needs to link programs, so no separate Visual Studio Build Tools install is required.

You will also need the [clangd extension](https://marketplace.visualstudio.com/items?itemName=llvm-vs-code-extensions.vscode-clangd) in VS Code for code completion, diagnostics, and navigation. The WinLibs Clang build includes `clangd`, so the extension can use the copy on your `PATH`. If you also have Microsoft's C/C++ extension installed, disable its IntelliSense to avoid conflicts with clangd.

## Contributing

This is a personal learning repository, but suggestions and improvements are welcome. Feel free to open an issue or a pull request.

## Author

**01skywalker**: [GitHub profile](https://github.com/01skywalker)
