#ifndef _DSP_INTEL_HPP
#define _DSP_INTEL_HPP

#include "DSP_interface.hpp"

#if defined(__x86_64__) || defined(__i386__) || \
    defined(_M_X64) || defined(_M_IX86)

struct DSP_Intel : DSP_Interface<DSP_Intel> {
	static void foo() {
		volatile auto a = 789456;
	}
};

#define temp_processor DSP_Intel
#endif

#endif
