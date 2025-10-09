# DSA

A simple repository for Data Structures and Algorithms experiments in C++.

## Files
- `main.c++` – Primary source file (consider renaming to `main.cpp` for standard tooling compatibility).

## Getting Started
### Build (single file)
You can compile with g++ (MinGW or similar):
```
g++ -std=c++17 -O2 -Wall -Wextra -o main.exe main.c++
```
Run:
```
./main.exe
```
On Windows PowerShell:
```
./main.exe
```

## Git: Initialize & First Push
1. Initialize repo:
```
git init
```
2. (Optional) Rename default branch to main (if Git < 2.28 default is master):
```
git branch -m master main
```
3. Stage files:
```
git add .
```
4. Commit:
```
git commit -m "Initial commit: DSA project"
```
5. Create a new empty repo on GitHub (do NOT add README/.gitignore there to avoid conflicts). Copy its URL, e.g.:
```
https://github.com/<your-user>/dsa.git
```
6. Add remote:
```
git remote add origin https://github.com/<your-user>/dsa.git
```
7. Push:
```
git push -u origin main
```

## Feature Flag: "Enable GPT-5 mini for all clients"
This repository currently has no feature flag system. To add a global flag:

### Option 1: Compile-time macro
Add a definition during build:
```
g++ -DENABLE_GPT5_MINI -std=c++17 -O2 -Wall -Wextra -o main.exe main.c++
```
In code:
```cpp
#ifdef ENABLE_GPT5_MINI
// GPT-5 mini specific behavior
#endif
```

### Option 2: Config file (runtime)
Create `config.ini`:
```
[gpt]
mini_enabled=true
```
Parse it at startup and branch logic.

### Option 3: Environment variable
Set in PowerShell:
```
$env:ENABLE_GPT5_MINI = "1"
```
Check in code (using `std::getenv`).

Pick approach based on whether you need to toggle without recompiling (choose runtime if yes).

## Recommended Next Steps
- Rename `main.c++` to `main.cpp` for consistency.
- Add separate source/header files as the project grows.
- Add unit tests (e.g., with Catch2 or GoogleTest).

## License
Add a license of your choice (MIT, Apache-2.0, etc.).
