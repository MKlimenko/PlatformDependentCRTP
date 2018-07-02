#ifndef _DSP_INTEL_HPP
#define _DSP_INTEL_HPP

#include "DSP_interface.hpp"

#if defined(__x86_64__) || defined(__i386__) || \
    defined(_M_X64) || defined(_M_IX86)

#include <cmath>
#include <complex>
#include <cstdint>
#include <ipp.h>
#include <vector>

struct DSP_Intel : DSP_Interface<DSP_Intel> {
	static void foo() {
		volatile auto a = 789456;
	}
	
	static auto GenerateSine(double frequency, double sampling_rate, std::size_t samples) {
		std::vector<double> dst(samples);
		double phase = 0;
		ippsTone_64f(dst.data(), static_cast<int>(dst.size()), 1.0, frequency / sampling_rate, &phase, IppHintAlgorithm::ippAlgHintNone);
		return dst;
	}
};

#define temp_processor DSP_Intel
#endif

#endif
