# 🔄 get_next_line

**Description**  
Function that reads and returns one line at a time from a file descriptor, with support for multiple simultaneous streams.

**🛠️ Technologies**  
- C language  
- Unix `read()` syscall  
- Static/dynamic buffer management  

**🎯 Key Learning Outcomes**  
- Persisting “leftover” data between calls  
- Minimizing costly I/O operations  
- Managing state per file descriptor without memory leaks  
