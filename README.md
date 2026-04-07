# INTRUDER v3.0 (Standalone Edition)

#### Video Demo: https://drive.google.com/file/d/1lsK73FMWu4WesXXJIajOrzY7Mzm_xUXM/view?usp=sharing

#### Project Description:
Intruder v3.0 is a security-focused command-line utility written in C. Leveraging my background in cybersecurity, I designed this tool to demonstrate the mechanics of a linear brute-force attack against 4-digit PIN credentials. 

The project moves away from the simplified CS50 library to utilize standard C headers, demonstrating a deep understanding of memory management, pointer-based strings, and real-time terminal output.

#### Technical Features:
* **Linear Search Implementation:** Efficiently iterates through the 10^4 keyspace (0000-9999).
* **Cross-Platform Logic:** Utilizes preprocessor directives to handle timing ('sleep') across Windows and Linux environments.
* **Buffer Management:** Employs 'fflush(stdout)' to ensure smooth, non-buffered UI updates during the attack simulation.
* **Formatted Output:** Uses the '%04i' specifier to maintain structural integrity for PINs with leading zeros.

#### How to Compile:
Using GCC:
'gcc -o intruder intruder.c'
