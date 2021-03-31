// Copyrigth 2021 Makarov Alexander

#include <gtest/gtest.h>

#include "include/complex_number.h"

TEST(Makarov_Alexander_ComlexNumberTest, Zero_Div_Exception) {
	double real = 1.0;
	double img = 0.0;
	ComplexNumber numerator(real, img);
	ComplexNumber denominator;
	ASSERT_ANY_THROW(numerator / denominator);
}

TEST(Makarov_Alexander_ComlexNumberTest, Is_i_Square_Minus_One) {
	double real_1 = 0.0;
	double img_1 = 1.0;
	double real_2 = 0.0;
	double img_2 = 1.0;
	ComplexNumber z1(real_1, img_1), z2(real_2, img_2);
	ASSERT_DOUBLE_EQ(-1.0, (z1 * z2).getRe());
	ASSERT_DOUBLE_EQ(0.0, (z1 * z2).getIm());
}
