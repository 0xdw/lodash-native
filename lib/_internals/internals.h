#ifndef INTERNALS_H
#define INTERNALS_H

#define STATUS_CHECK assert(status == napi_ok);

#define MAX(x, y) (((x) > (y)) ? (x) : (y))
#define MIN(x, y) (((x) < (y)) ? (x) : (y))

#endif
