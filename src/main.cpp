#include "DSP.hpp"

int main() {
	auto dst = DSP<>::GenerateSine(1e3, 1e6, 1000);
	auto dst_common = DSP<Common>::GenerateSine(1e3, 1e6, 1000);

	return 0;
}
