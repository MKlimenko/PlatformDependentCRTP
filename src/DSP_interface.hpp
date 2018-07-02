#ifndef _DSP_INTERFACE_HPP
#define _DSP_INTERFACE_HPP

template <typename T>
struct DSP_Interface {
	static void foo() {
		return T::foo();
	}
};

#endif
