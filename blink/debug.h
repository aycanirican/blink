#ifndef BLINK_DEBUG_H_
#define BLINK_DEBUG_H_
#include "blink/fds.h"

#define LOGCPU(M, FMT, ...)                                                   \
  LOGF(FMT " IP %" PRIx64 " AX %" PRIx64 " CX %" PRIx64 " DX %" PRIx64        \
           " BX %" PRIx64 " SP %" PRIx64 " "                                  \
           "BP %" PRIx64 " SI %" PRIx64 " DI %" PRIx64 " R8 %" PRIx64         \
           " R9 %" PRIx64 " R10 %" PRIx64 " R11 %" PRIx64 " R12 %" PRIx64 " " \
           "R13 %" PRIx64 " R14 %" PRIx64 " R15 %" PRIx64 "" __VA_ARGS__,     \
       M->ip, Read64(M->ax), Read64(M->cx), Read64(M->dx), Read64(M->bx),     \
       Read64(M->sp), Read64(M->bp), Read64(M->si), Read64(M->di),            \
       Read64(M->r8), Read64(M->r9), Read64(M->r10), Read64(M->r11),          \
       Read64(M->r12), Read64(M->r13), Read64(M->r14), Read64(M->r15));

void PrintFds(struct Fds *);

#endif /* BLINK_DEBUG_H_ */