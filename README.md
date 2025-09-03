# linux-c-lab1

# Linux, Shell, and C Lab

## Overview
This repository contains my work for the Ubuntu Linux, shell scripting, and C programming lab.

## Structure
- `command-line/`: Logs from command-line tasks.
- `shell-scripts/`: Shell scripts for automation.
- `c-programs/`: C programs with compilation.

## Testing and Running

### Command Line
Used `ls`, `cd`, `chmod`, etc., in Codespaces. See `easy-log.txt`, etc.

### Shell Scripts
Tested `easy-greet.sh` with input, `file-count.sh` with directories.

### C Programs
Compiled with `gcc`. Ran `contacts.c` to manage contacts.

### Project
`project.sh` compiles and runs `contacts.c`, logs output.

## Programs Created

### Easy Level
- **add.c**: Simple program that adds two numbers input by user
- **Compilation**: `gcc add.c -o add && ./add`

### Intermediate Level  
- **factorial.c**: Recursive factorial calculator
- **Features**: Input validation, recursive function implementation
- **Compilation**: `gcc factorial.c -o factorial && ./factorial`

### Advanced Level
- **contacts.c**: Full contact management system
- **Features**: 
  - Add/view contacts using structs
  - File I/O for persistent storage
  - Menu-driven interface
  - Arrays and pointers implementation
- **Compilation**: `gcc -g contacts.c -o contacts && ./contacts`

## Challenges and Learnings
- Learned Git commits and debugging C with `gdb`.
- Challenges: file permissions and pointer syntax.
- Successfully implemented contact management with file persistence

## Project Integration
The `project.sh` script automates the entire workflow:
1. Compiles the contacts program
2. Runs the interactive contact manager
3. Creates compressed backups
4. Logs execution timestamps
