#include <algorithm>
#include <cmath>

float black_scholes(const float price, const float exercise_price,
	const float rate){
	float d1 = (log(price/exercise_price) + (rate + 0.5 * pow(sigma,2)) * (mattime - currenttime))
	/sigma * sqrt(mattime - currenttime));
}