// https://stackoverflow.com/a/5920028/936269
#ifdef _WIN32

#elif __APPLE__

#elif UNIX

#else
#   error "Unknown compiler"
#endif
