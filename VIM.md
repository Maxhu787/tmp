Here's a list of Vim movement and insertion-related keys:

### **File Navigation**

- `gg` → Move to the start of the file
- `G` → Move to the end of the file
- `:n` → Move to line `n` (e.g., `:10` moves to line 10)
- `H` → Move to the top of the screen
- `M` → Move to the middle of the screen
- `L` → Move to the bottom of the screen

### **Line Navigation**

- `0` → Move to the beginning of the line
- `^` → Move to the first non-blank character of the line
- `$` → Move to the end of the line

### **Word Navigation**

- `w` → Move forward to the start of the next word
- `W` → Move forward to the start of the next word (ignores punctuation)
- `e` → Move forward to the end of the current/next word
- `E` → Move forward to the end of the current/next word (ignores punctuation)
- `b` → Move backward to the start of the previous word
- `B` → Move backward to the start of the previous word (ignores punctuation)

### **Paragraph Navigation**

- `{` → Move to the beginning of the current/previous paragraph
- `}` → Move to the end of the next paragraph

### **Screen Navigation**

- `Ctrl-d` → Scroll down half a screen
- `Ctrl-u` → Scroll up half a screen
- `Ctrl-f` → Scroll forward one full screen
- `Ctrl-b` → Scroll backward one full screen

### **Search and Jumps**

- `/pattern` → Search forward for `pattern`
- `?pattern` → Search backward for `pattern`
- `n` → Repeat last search forward
- `N` → Repeat last search backward
- `%` → Jump between matching brackets `()`, `{}`, `[]`
- `Ctrl-o` → Jump to older cursor position
- `Ctrl-i` → Jump to newer cursor position
- `''` → Jump to the last cursor position within the same file
- `'.` → Jump to the last change in the file

### **Insert Modes**

- `i` → Insert at cursor
- `I` → Insert at the beginning of the line
- `a` → Append after cursor
- `A` → Append at the end of the line
- `o` → Open a new line below
- `O` → Open a new line above

### **Undo & Redo in Vim**

- `u` → **Undo** last change
- `U` → **Undo** all changes on the current line (before leaving it)
- `Ctrl-r` → **Redo** the last undone change

### **Copying (Yanking) & Pasting in Vim**

- `yy` → Yank (copy) the **current line**
- `nyy` → Yank **n** lines (e.g., `3yy` copies 3 lines)
- `y$` → Yank from the **cursor** to the **end of the line**
- `y^` → Yank from the **cursor** to the **first non-blank character** of the line
- `yw` → Yank a **word**
- `yG` → Yank from the **cursor** to the **end of the file**
- `ygg` → Yank from the **cursor** to the **beginning of the file**
- `viwy` → Yank the **current word** (visual mode)
- `v$y` → Yank from the **cursor** to the **end of the line** (visual mode)
- `:%y+` → Yank **entire file**

### **Pasting**

- `p` → Paste **after** the cursor
- `P` → Paste **before** the cursor

### **Deleting & Copying to System Clipboard**

(Requires `+clipboard` support in Vim or using `gvim`)

- `"+yy` → Yank **current line** to system clipboard
- `"+p` → Paste from system clipboard

Let me know if you need more! 🚀

### config

:set tabstop=4
:set shiftwidth=4
:set expandtab

:set number
:set relativenumber
