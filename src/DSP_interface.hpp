#ifndef _DSP_INTERFACE_HPP
#define _DSP_INTERFACE_HPP

#include <cstring>
#include <type_traits>

template <typename T>
struct DSP_Interface {
	static void foo() {
		return T::foo();
	}

	static auto GenerateSine(double frequency, double sampling_rate, std::size_t samples) {
		return T::GenerateSine(frequency, sampling_rate, samples);
	}
};

#endif
