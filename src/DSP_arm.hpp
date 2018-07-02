#ifndef _DSP_ARM_HPP
#define _DSP_ARM_HPP

#include "DSP_interface.hpp"

#if defined(__arm__) || defined(_M_ARM) || \
    defined(_M_ARM64)

struct arm : DSP_Interface<arm> {
	static void foo() {
		volatile auto a = 111222;
	}
};

#define temp_processor arm
#endif

#endif
