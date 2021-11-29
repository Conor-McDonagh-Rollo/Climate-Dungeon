#ifndef DEBUG_H
#define DEBUG_H

#define DEBUG_STATE 1 // Turn Debug logs on or off

#if DEBUG_STATE == 1 // print debugs

#define Debug_Log(x) (std::cout << (x) << std::endl)

#else // dont print debugs

#define Debug_Log(x)

#endif

#endif // !DEBUG_H
