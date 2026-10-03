# HELP - Simple Line Editor

## Project Description

The Simple Line Editor is a command-line text editor developed in C.

The document is stored in memory using an array of strings. The program allows the user to insert, delete, and display lines of text.

---

## Commands

### 1. Insert Line

Adds a new line at the specified line number.

**Usage:**

Select:

```text
1
```

Then enter the line number and text.

**Example:**

```text
Enter your choice: 1
Enter line number to insert (1-1): 1
Enter the text: Hello World
Line inserted successfully.
```

---

### 2. Delete Line

Deletes an existing line from the document.

**Usage:**

Select:

```text
2
```

Then enter the line number to delete.

**Example:**

```text
Enter your choice: 2
Enter line number to delete (1-2): 1
Line deleted successfully.
```

---

### 3. Display Document

Displays all currently stored lines with their line numbers.

**Usage:**

Select:

```text
3
```

**Example:**

```text
----- DOCUMENT -----
1: Hello World
2: This is a line editor.
--------------------
```

---

### 4. Exit

Closes the line editor program.

**Usage:**

Select:

```text
4
```

**Example:**

```text
Enter your choice: 4
Exiting Line Editor. Goodbye!
```

---

## Error Handling

The program handles invalid line numbers.

**Example:**

```text
Enter line number to delete (1-1): 5
Invalid line number.
```

The program also displays a message when the document is empty.

**Example:**

```text
Document is empty.
```

---

## Data Structure

The program uses an array of strings.

- Maximum number of lines: 100
- Maximum characters per line: 200

This data structure makes it simple to access, insert, delete, and display lines.

---

## Main Functions

- `insertLine()` - Inserts a new line.
- `deleteLine()` - Deletes an existing line.
- `displayDocument()` - Displays the complete document.
- `main()` - Controls the menu and program execution.