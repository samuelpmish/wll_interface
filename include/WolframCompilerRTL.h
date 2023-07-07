/*************************************************************************
						Mathematica source file

		Copyright 1986 through 2000 by Wolfram Research Inc.

This material contains trade secrets and may be registered with the
U.S. Copyright Office as an unpublished work, pursuant to Title 17,
U.S. Code, Section 408.  Unauthorized copying, adaptation, distribution
or display is prohibited.

$Id$

*************************************************************************/

#ifndef WOLFRAMCOMPILERRTL_H
#define WOLFRAMCOMPILERRTL_H

#ifdef __cplusplus
extern "C" {
#endif

#define CompilerCoerceArguments(e) ((void**) e)
#define CompilerCoerceResult(e) ((void*) e.integer)

RTL_DLL_EXPORT int WolframCompiler_CatchBase(void* funArg, void* data, mint len, void** argsP, void* resP);

#ifdef __cplusplus
}
#endif

#endif
