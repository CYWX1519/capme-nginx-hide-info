
/*
 * Copyright (C) Igor Sysoev
 * Copyright (C) Nginx, Inc.
 */


#ifndef _NGINX_H_INCLUDED_
#define _NGINX_H_INCLUDED_


#define nginx_version      1023004
// #define NGINX_VERSION      "1.23.4"
#define NGINX_VERSION      "1.0.1"
// #define NGINX_VER          "nginx/" NGINX_VERSION
#define NGINX_VER          "Magic/" NGINX_VERSION

#ifdef NGX_BUILD
#define NGINX_VER_BUILD    NGINX_VER " (" NGX_BUILD ")"
#else
#define NGINX_VER_BUILD    NGINX_VER
#endif

// #define NGINX_VAR          "NGINX"
#define NGINX_VAR          "MAGIC"
#define NGX_OLDPID_EXT     ".oldbin"


#endif /* _NGINX_H_INCLUDED_ */
