#ifndef CBENCH_H
#define CBENCH_H

#ifndef BUFLEN
#define BUFLEN 65536
#endif

#ifdef __linux__
#define USE_EPOLL
#define USE_GPP

#ifdef USE_GPP
#include <unordered_map>
#include <time.h>
using namespace std;
struct _timestamp {
    struct timespec tp;
    bool dirty;
};
extern unordered_map<int, unordered_map<int, struct _timestamp*>> timetable;
#endif

#endif /* #ifdef __linux__ */

#endif /* #ifndef CBENCH_H */
