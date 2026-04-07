#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// Handle the difference between Windows and Linux sleep functions
#ifdef _WIN32
#include <windows.h>
#define sleep_ms(ms) Sleep(ms)
#else
#include <unistd.h>
#define sleep_ms(ms) usleep(ms * 1000)
#endif

int main(void)
{
    // --- ANSI COLOR CODES ---
    const char* GREEN = "\033[0;32m";
    const char* RED = "\033[0;31m";
    const char* RESET = "\033[0m";

    // 1. ASCII ART HEADER
    printf("%s", GREEN);
    printf("========================================\n");
    printf("      I N T R U D E R   v 3 . 0         \n");
    printf("      (Standalone Edition)              \n");
    printf("========================================\n");
    printf("%s", RESET);

    // 2. TARGET INPUT
    int pin;
    printf("Set Target PIN (0000-9999): ");

    if (scanf("%d", &pin) != 1)
    {
        printf("%s[!] Error: Invalid input. Exiting.\n%s", RED, RESET);
        return 1;
    }

    if (pin < 0 || pin > 9999)
    {
        printf("%s[!] Error: PIN must be 0000-9999.\n%s", RED, RESET);
        return 1;
    }

    printf("\n%s[!] INITIALIZING BRUTE FORCE ATTACK...%s\n", RED, RESET);
    sleep_ms(500);

    // 3. The Attack Loop
    for (int i = 0; i <= 9999; i++)
    {
        printf("\r%s[*] Testing PIN combination: %04i%s", RED, i, RESET);
        fflush(stdout);

        sleep_ms(1); // Small delay for visual effect

        // 4. Check for Match
        if (i == pin)
        {
            printf("\n\n");
            printf("%s[+] PASSWORD CRACKED SUCCESSFULLY!%s\n", GREEN, RESET);
            printf("%s[+] MATCH FOUND: %04i%s\n", GREEN, i, RESET);
            break;
        }
    }

    printf("\nPress any key to exit...");
    getchar(); // Keeps the window open so you can see the result
    getchar();
    return 0;
}