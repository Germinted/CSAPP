# CSAPP Labs - Student Version

This directory contains the CSAPP (Computer Systems: A Programmer's Perspective) labs, organized for students to complete. Each lab has been prepared with function implementations cleared so students can implement them from scratch.

## Lab Structure

### 1. datalab/ - Data Lab
**File**: `bits.c`
- All 15 puzzle functions have been cleared and replaced with TODO placeholders
- Functions include: bitAnd, getByte, logicalShift, bitCount, bang, tmin, fitsBits, divpwr2, negate, isPositive, isLessOrEqual, ilog2, float_neg, float_i2f, float_twice

### 2. bomb/ - Bomb Lab
**Files**: `bomb` (binary), `bomb.c` (reference)
- Binary bomb for reverse engineering
- Reference bomb.c provided for understanding (read-only)

### 3. attack/ - Attack Lab
**Files**: `ctarget` (binary), `farm.c` (template)
- Binary exploitation targets
- farm.c provided as template for generating attack code

### 4. cachelab/ - Cache Lab
**Part A**: `csim.c`
- Load() function cleared - implements cache simulation

**Part B**: `trans.c`
- transpose_submit() function cleared - implement optimized matrix transpose
- trans() left as reference implementation

### 5. malloclab/ - Malloc Lab
**File**: `mm.c`
- Cleared functions: mm_init(), mm_malloc(), mm_free(), mm_realloc()
- Team structure at top for students to fill in

### 6. shlab/ - Shell Lab
**File**: `tsh.c`
- Cleared functions: eval(), builtin_cmd(), do_bgfg(), waitfg()
- Signal handlers: sigchld_handler(), sigint_handler(), sigtstp_handler()
- Helper functions (parseline, clearjob, initjobs, etc.) left intact

### 7. archlab/ - Architecture Lab
**Files**: `sim/` directory (complete implementation)
- Provided as reference for understanding processor design
- Students work with HCL files (not C)

### 8. proxylab/ - Proxy Lab
**File**: `proxy.c`
- Main function cleared except for user_agent_hdr definition
- Students implement full HTTP proxy server

## Template Branch

A `template` branch is available in this repository that contains empty function stubs for the exercises. This branch is specifically designed for students who want to start with clean templates and implement all functions from scratch.

To switch to the template branch:
```bash
git checkout template
```

## Building and Testing

Each lab has its own Makefile and build instructions in the respective lab directory. Refer to the PDF documentation included in each lab folder for specific requirements.

## Notes for Students

- All TODO comments indicate where you need to implement code
- Reference implementations are provided in some labs (e.g., trans() in cachelab)
- Always read the lab PDF before starting
- Use the provided test harnesses to verify your implementations

Good luck with your CSAPP labs!
