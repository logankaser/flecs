/*
                                   )
                                  (.)
                                  .|.
                                  | |
                              _.--| |--._
                           .-';  ;`-'& ; `&.
                          \   &  ;    &   &_/
                           |"""---...---"""|
                           \ | | | | | | | /
                            `---.|.|.|.---'

 * This file is generated by bake.lang.c for your convenience. Headers of
 * dependencies will automatically show up in this file. Include bake_config.h
 * in your main project file. Do not edit! */

#ifndef PERSISTENT_QUERY_BAKE_CONFIG_H
#define PERSISTENT_QUERY_BAKE_CONFIG_H

/* Headers of public dependencies */
#include <flecs.h>

/* Headers of private dependencies */
#ifdef PERSISTENT_QUERY_IMPL
/* No dependencies */
#endif

/* Convenience macro for exporting symbols */
#ifndef PERSISTENT_QUERY_STATIC
  #if PERSISTENT_QUERY_IMPL && (defined(_MSC_VER) || defined(__MINGW32__))
    #define PERSISTENT_QUERY_EXPORT __declspec(dllexport)
  #elif PERSISTENT_QUERY_IMPL
    #define PERSISTENT_QUERY_EXPORT __attribute__((__visibility__("default")))
  #elif defined _MSC_VER
    #define PERSISTENT_QUERY_EXPORT __declspec(dllimport)
  #else
    #define PERSISTENT_QUERY_EXPORT
  #endif
#else
  #define PERSISTENT_QUERY_EXPORT
#endif

#endif
