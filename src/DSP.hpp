#ifndef _DSP_HPP
#define _DSP_HPP

#include "DSP_interface.hpp"
#include "DSP_arm.hpp"
#include "DSP_Intel.hpp"

#include <cmath>
#include <cstring>
#include <vector>

struct Common : DSP_Interface<Common> {
	static void foo() {
		volatile auto a = 123456;
	}

	static auto GenerateSine(double frequency, double sampling_rate, std::size_t samples) {
		std::vector<double> dst(samples);
		const double pi_2 = 8.0 * std::atan(1.0);
		for (std::size_t i = 0; i < dst.size(); ++i) {
			double triarg = i * pi_2 * frequency / sampling_rate;
			dst[i] = cos(triarg);
		}
		return dst;
	}
};

#if defined (temp_processor)
using processor = temp_processor;
#undef temp_processor
#else
using processor = Common;
#endif

template <typename T = processor>
using DSP = DSP_Interface<T>;

#endif
