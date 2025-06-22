#pragma once

#if defined(WIN32) || defined(_MSC_VER)

#if defined(LIBHARDWARE_EXPORTS)
#define LIBHARDWARE_API __declspec(dllexport)
#else
#define LIBHARDWARE_API __declspec(dllimport)
#endif  // defined(LIBHARDWARE_EXPORTS)

#else  // defined(WIN32)
#if defined(LIBHARDWARE_EXPORTS)
#define LIBHARDWARE_API __attribute__((visibility("default")))
#else
#define LIBHARDWARE_API
#endif  // defined(LIBHARDWARE_EXPORTS)
#endif

