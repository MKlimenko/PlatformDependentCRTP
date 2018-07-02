#ifndef _DSP_ARM_HPP
#define _DSP_ARM_HPP

#include "DSP_interface.hpp"

#if defined(__arm__) || defined(_M_ARM) || \
    defined(_M_ARM64)

#include <cstdint>
#include <vector>

struct arm : DSP_Interface<arm> {
	static void foo() {
		volatile auto a = 111222;
	}

	static auto GenerateSine(double frequency, double sampling_rate, std::size_t samples) {
		std::vector<double> dst(samples); // no implementation for now
		return dst;
	}
};

#define temp_processor arm
#endif

#endif
