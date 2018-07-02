#ifndef _DSP_HPP
#define _DSP_HPP

#include "DSP_interface.hpp"
#include "DSP_arm.hpp"
#include "DSP_Intel.hpp"

struct Common : DSP_Interface<Common> {
	static void foo() {
		volatile auto a = 123456;
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
