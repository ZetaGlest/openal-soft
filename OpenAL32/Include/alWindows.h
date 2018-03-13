#pragma once

#ifndef __GNUC__
#ifndef _WIN64
#ifdef _WIN32

static inline unsigned char _BitScanForward64(unsigned long* Index, unsigned __int64 Mask) {
	unsigned char bit = _BitScanForward(Index, Mask);
	if (bit == 0)
		bit = _BitScanForward(Index, Mask >> 32);
	return bit;
}

#endif
#endif
#endif