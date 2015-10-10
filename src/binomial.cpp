#include <algorithm>
#include <cmath>

namespace binomial {
	double european(const float spot, const float exercice, 
		const float rate, const float up, const float down ){
		auto q = (exp(rate) - down)/(up/down)
		auto cu = std::max(0, S * up - exercice);
		auto cd = std::max(0, S * down - exercice);
		auto call = exp(-rate) * (q * cu +  (1 - q) * cd);
		return call;
	}
}