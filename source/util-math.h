/*
* Modern effects for a modern Streamer
* Copyright (C) 2017 Michael Fabian Dirks
*
* This program is free software; you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation; either version 2 of the License, or
* (at your option) any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with this program; if not, write to the Free Software
* Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA
*/

#pragma once
#include <math.h>
#include <inttypes.h>

#define PI		3.1415926535897932384626433832795
#define PI2		6.283185307179586476925286766559
#define PI2_SQROOT	2.506628274631000502415765284811		

inline double_t Gaussian1D(double_t x, double_t o) {
	double_t c = (x / o);
	double_t b = exp(-0.5 * c * c);
	double_t a = (1.0 / (o * PI2_SQROOT));
	return a * b;
}

inline size_t GetNearestPowerOfTwoAbove(size_t v) {
	return 1 << size_t(ceil(log10(v) / log10(2)));
}

inline size_t GetNearestPowerOfTwoBelow(size_t v) {
	return 1 << size_t(floor(log10(v) / log10(2)));
}
