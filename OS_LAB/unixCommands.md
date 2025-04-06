# 🧰 Essential Unix/Linux Command Reference

This document covers frequently used Unix/Linux terminal commands, their options (attributes), and real-world usage examples.

---

## 📁 1. `ls` – List Directory Contents

```bash
ls [options] [path]
```

### Options:
| Option | Description |
|--------|-------------|
| `-l`   | Long format listing (includes permissions, size, time) |
| `-a`   | Show hidden files (starting with `.`) |
| `-h`   | Human-readable file sizes (e.g., KB, MB) |
| `-R`   | Recursively list subdirectories |
| `-t`   | Sort by modification time |

### Example:
```bash
ls -lah /var/log
```

---

## 🗑️ 2. `rm` – Remove Files or Directories

```bash
rm [options] file(s)
```

### Options:
| Option | Description |
|--------|-------------|
| `-r`   | Remove directories and contents recursively |
| `-f`   | Force deletion (no confirmation) |
| `-i`   | Prompt before every removal |
| `-v`   | Verbose – show what is being removed |

### Example:
```bash
rm -rfv old_backup/
```

---

## 📄 3. `cp` – Copy Files or Directories

```bash
cp [options] source destination
```

### Options:
| Option | Description |
|--------|-------------|
| `-r`   | Recursively copy directories |
| `-u`   | Only copy when the source is newer |
| `-v`   | Verbose output |
| `-i`   | Prompt before overwriting files |

### Example:
```bash
cp -ruv src/ backup/
```

---

## 📂 4. `mv` – Move or Rename Files/Directories

```bash
mv [options] source destination
```

### Options:
| Option | Description |
|--------|-------------|
| `-i`   | Prompt before overwrite |
| `-u`   | Only move if source is newer |
| `-v`   | Verbose output |

### Example:
```bash
mv -iv report.txt ~/Documents/
```

---

## 📝 5. `touch` – Create Empty Files or Update Timestamps

```bash
touch [options] filename
```

### Options:
| Option | Description |
|--------|-------------|
| `-a`   | Change access time only |
| `-m`   | Change modification time only |
| `-t`   | Use a specific timestamp |
| `-c`   | Do not create file if it doesn't exist |

### Example:
```bash
touch -a -m -t 202504071200 file.txt
```

---

## 📁 6. `mkdir` – Make Directories

```bash
mkdir [options] directory_name
```

### Options:
| Option | Description |
|--------|-------------|
| `-p`   | Create parent directories as needed |
| `-v`   | Print a message for each created directory |

### Example:
```bash
mkdir -pv project/{src,bin,docs}
```

---

## 🔍 7. `find` – Search Files and Directories

```bash
find [path] [options] [expression]
```

### Common Options:
| Option | Description |
|--------|-------------|
| `-name`       | Search by file name (supports wildcards) |
| `-type`       | Filter by type (e.g., `f` for file, `d` for directory) |
| `-mtime`      | Modified N days ago (negative for less than, `+` for more than) |
| `-size`       | Search by file size (e.g., `+100M`, `-10k`) |
| `-exec ... ;` | Execute command on each result |

### Example:
```bash
find /home/user -type f -name "*.log" -mtime +7 -exec rm -v {} \;
```

---

## 📍 8. `pwd` – Print Working Directory

```bash
pwd
```

### Description:
Displays the full absolute path of the current working directory.

### Example:
```bash
pwd
```

---

## 🔄 9. `cd` – Change Directory

```bash
cd [directory]
```

### Examples:
```bash
cd /etc
cd ~     # Go to home directory
cd ..    # Go up one directory
```

---

## 📖 10. `man` – Manual Pages

```bash
man [command]
```

### Description:
Shows the manual (help) pages for any command.

### Example:
```bash
man grep
```

---

## 🧼 11. `clear` – Clear Terminal Screen

```bash
clear
```

### Description:
Clears the terminal screen, providing a clean workspace.

---


