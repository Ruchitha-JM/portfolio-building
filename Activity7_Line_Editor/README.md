# Activity 7 - Simple Line Editor in C

## Student Details

**Name:** Ruchitha J M  
**Roll No:** R25EJ125  
**Team Size:** 1  

---

## Project Title

Simple Command-Line Line Editor in C

---

## Project Description

This project implements a simple command-line line editor using the C programming language.

The document is stored in memory using an array of strings. The program provides menu-based commands to insert, delete, and display lines.

---

## Features Implemented

The following core features are implemented:

1. Insert a line
2. Delete a line
3. Display the document

Additional error handling is included for invalid line numbers and empty documents.

---

## Data Structure

The project uses an **array of strings** to store the document.

### Specifications

- Maximum number of lines: 100
- Maximum characters per line: 200

The array makes it easy to access lines and perform insertion, deletion, and display operations.

---

## Commands

| Option | Command | Description |
|--------|---------|-------------|
| 1 | Insert Line | Adds a new line at the specified position |
| 2 | Delete Line | Removes a line from the document |
| 3 | Display Document | Displays all current lines |
| 4 | Exit | Exits the program |

---

## Program Functions

### `insertLine()`

Inserts a new line at the specified line number and shifts existing lines downward.

### `deleteLine()`

Deletes the selected line and shifts the following lines upward.

### `displayDocument()`

Displays all lines in the document with their line numbers.

### `main()`

Controls the menu and program execution.

---

## Error Handling

The program handles:

- Invalid line numbers
- Attempting to delete from an empty document
- Attempting to display an empty document
- Maximum document size

---

## Compilation

Open the terminal in the project folder and run:

```bash
gcc line_editor.c -o line_editor