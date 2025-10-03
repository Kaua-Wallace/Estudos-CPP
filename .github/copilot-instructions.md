# Copilot Instructions for Estudos-CPP

This repository contains C++ study exercises, each in its own directory, often with an `enunciado.txt` (problem statement), a `.cpp` source file, and a compiled `.exe` output. The structure is designed for learning and experimentation with C++ concepts.

## Project Structure
- `EDOO/` contains subfolders for each exercise or playlist:
  - `exercicio N XXX/`: Each has `enunciado.txt`, a `.cpp` file, and an `output/` folder with the compiled `.exe`.
  - `Playlist Douglas Maioli/`: Contains `funcoes.cpp` and its output.
- No central build system; each `.cpp` is compiled individually.

## Build & Run Workflow
- **Build**: Use the VS Code task `C/C++: gcc.exe arquivo de build ativo` to compile the currently open `.cpp` file. This uses MinGW's `gcc.exe`.
  - Output is placed in the same folder as the source, or in the `output/` subfolder.
- **Run**: Execute the resulting `.exe` directly, or use VS Code's run/debug features.
- **No automated tests**: This repo is for manual experimentation and learning.

## Coding Patterns & Conventions
- Use of `using namespace std;` is common for simplicity.
- Each exercise is self-contained; global variables may be used for demonstration.
- Problem statements are in `enunciado.txt` for context.
- Comments often explain C++ concepts for learners.
- No external dependencies beyond the C++ standard library and MinGW for compilation.

## Examples
- See `EDOO/exercicio 4 115/ex 4 115.cpp` for a random number guessing game with input validation and replay logic.
- See `EDOO/Playlist Douglas Maioli/funcoes.cpp` for function usage and global variable demonstration.

## Agent Guidance
- When adding new exercises, follow the existing folder/file pattern.
- Keep code and output organized per exercise.
- Prefer clear, commented code to aid learning.
- Do not introduce complex build systems or external dependencies.

---
For more context, see the `README.md` and the `enunciado.txt` files in each exercise folder.
