/*
---------------------------------------------------------------------------
Open Asset Import Library (assimp)
---------------------------------------------------------------------------

This generated configuration header is required by assimp/defs.h.  The
vendored SDK contains config.h.in and the prebuilt Release DLL, but not the
generated header.  Keep the default single-precision ABI: this matches the
normal Assimp Windows release configuration and the engine's glm::vec3
conversion path.
*/
#pragma once
#ifndef AI_CONFIG_H_INC
#define AI_CONFIG_H_INC

// Intentionally do not define ASSIMP_DOUBLE_PRECISION.
// assimp::ai_real therefore remains float, matching the bundled DLL.

#endif // AI_CONFIG_H_INC
