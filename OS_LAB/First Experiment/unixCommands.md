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

## 🧺 2.1. `rmdir` – Remove Empty Directories

```bash
rmdir [options] directory_name
```

### Options:
| Option | Description |
|--------|-------------|
| `--ignore-fail-on-non-empty` | Ignore failures if directory is not empty |
| `-p`   | Remove directory and its ancestors |

### Example:
```bash
rmdir -p tmp/folder/subfolder
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

### Options:
| Option | Description |
|--------|-------------|
| `-name`        | Search by file name |
| `-type`        | Search by type (`f` for file, `d` for directory) |
| `-size`        | Search by file size (e.g. `+100M`) |
| `-exec`        | Execute a command on each result |
| `-mtime`       | Modified time in days ago |
| `-perm`        | Search by file permissions |

### Example:
```bash
find /var -name "*.log" -size +10M -exec rm -i {} \;
```

---

## 📌 8. `pwd` – Print Working Directory

```bash
pwd
```

Prints the full path of the current working directory.

---

## 🚪 9. `cd` – Change Directory

```bash
cd [directory]
```

### Example:
```bash
cd ~/Documents/
```

---

## 📘 10. `man` – Manual Pages

```bash
man [command]
```

Displays the manual page for a command.

---

## 🧹 11. `clear` – Clear Terminal Screen

```bash
clear
```

Clears all previous commands/output from the terminal view.

---

## 📦 12. `tar` – Archive Utility

```bash
tar [options] archive.tar [file(s)]
```

### Options:
| Option | Description |
|--------|-------------|
| `-c`   | Create new archive |
| `-x`   | Extract files from archive |
| `-v`   | Verbose (list files being processed) |
| `-f`   | Use archive file name |
| `-z`   | Compress with gzip |
| `-j`   | Compress with bzip2 |

### Example:
```bash
tar -czvf archive.tar.gz folder/
```

---

## 📊 13. `ps` – Process Status

```bash
ps [options]
```

### Options:
| Option | Description |
|--------|-------------|
| `-e` or `-A` | Show all processes |
| `-f`   | Full format listing |
| `-u`   | Show processes for a specific user |
| `-x`   | Include processes without a controlling terminal |

### Example:
```bash
ps aux | grep firefox
```

---

## 🛑 14. `kill` – Terminate Processes

```bash
kill [options] PID
```

### Options:
| Option | Description |
|--------|-------------|
| `-9`   | Forcefully terminate a process |
| `-l`   | List all signal names |
| `-s`   | Send a specific signal |

### Example:
```bash
kill -9 1234
```

---

## 📄 15. `awk` – Pattern Scanning and Processing

```bash
awk [program] [file]
```

### Common Uses:
| Pattern | Description |
|---------|-------------|
| `'{print $1}'` | Print the first column of each line |
| `'/error/'`    | Match lines containing "error" |
| `'{sum += $1} END {print sum}'` | Sum all values in the first column |

### Example:
```bash
awk '{print $1, $3}' access.log
```

---

