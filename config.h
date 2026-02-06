#ifndef CONFIG_H
#define CONFIG_H

// String used to delimit block outputs in the status.
#define DELIMITER "  "

// Maximum number of Unicode characters that a block can output.
#define MAX_BLOCK_OUTPUT_LENGTH 45

// Control whether blocks are clickable.
#define CLICKABLE_BLOCKS 1

// Control whether a leading delimiter should be prepended to the status.
#define LEADING_DELIMITER 1

// Control whether a trailing delimiter should be appended to the status.
#define TRAILING_DELIMITER 1

// Define blocks for the status feed as X(icon, cmd, interval, signal).
// Stolen from https://github.com/UtkarshVerma/dotfiles/tree/main/.local/bin/statusbar
#define BLOCKS(X)              \
    X("", "sb-music",    0, 1) \
    X("", "sb-disk",     5, 2) \
    X("", "sb-memory",   2, 3) \
    X("", "sb-loadavg",  2, 4) \
    X("", "sb-mic",      0, 5) \
    X("", "sb-record",   0, 6) \
    X("", "sb-volume",   0, 7) \
    X("", "sb-battery",  5, 8) \
    X("", "sb-date",     1, 9)

#endif  // CONFIG_H
