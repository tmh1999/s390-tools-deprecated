/*
 * s390-tools/include/zt_common.h
 *   common s390-tools definitions.
 *
 * Copyright IBM Corp. 2004, 2006.
 *
 * Author(s): Gerhard Tonn (ton@de.ibm.com)
 */

#ifndef LIB_ZT_COMMON_H
#define LIB_ZT_COMMON_H

#define STRINGIFY_1(x)			#x
#define STRINGIFY(x)			STRINGIFY_1(x)

#ifdef UNUSED
#elif defined(__GNUC__)
# define UNUSED(x) UNUSED_ ## x __attribute__((unused))
#else
# define UNUSED(x) x
#endif

#define RELEASE_STRING	STRINGIFY (S390_TOOLS_RELEASE)
#define TOOLS_LIBDIR	STRINGIFY (S390_TOOLS_LIBDIR)
#define TOOLS_SYSCONFDIR STRINGIFY (S390_TOOLS_SYSCONFDIR)

#define __noreturn __attribute__((noreturn))
#define __packed __attribute__((packed))
#define __aligned(x) __attribute__((aligned(x)))
#define __may_alias __attribute__((may_alias))

typedef unsigned long long	u64;
typedef signed long long	s64;
typedef unsigned int		u32;
typedef signed int		s32;
typedef unsigned short int	u16;
typedef signed short int	s16;
typedef unsigned char		u8;
typedef signed char		s8;

#endif /* LIB_ZT_COMMON_H */
