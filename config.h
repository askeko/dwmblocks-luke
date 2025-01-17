// Modify this file to change what commands output to your statusbar, and
// recompile using the make command.
static const Block blocks[] = {
    /*Icon*/ /*Command*/ /*Update Interval*/ /*Update Signal*/
    //{"", "sb-tasks", 10, 26},
    //{"", "sb-news", 600, 6},
    {"", "sb-cpu", 1, 18},
    {"", "sb-mem", 1, 17},
    {"", "sb-temp", 1, 16},
    {"", "sb-disk", 60, 5},
    {"", "sb-internet", 5, 4},
    {"", "sb-volume", 60, 10},
    {"", "sb-datetime", 1, 1},
    {"", "sb-battery", 5, 3},
};

// Sets delimiter between status commands. NULL character ('\0') means no
// delimiter.
static char *delim = " ";

// Have dwmblocks automatically recompile and run when you edit this file in
// vim with the following line in your vimrc/init.vim:

// autocmd BufWritePost ~/.local/src/dwmblocks/config.h !cd
// ~/.local/src/dwmblocks/; sudo make install && { killall -q dwmblocks;setsid
// dwmblocks & }
