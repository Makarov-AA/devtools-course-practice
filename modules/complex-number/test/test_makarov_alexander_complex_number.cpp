// Copyright 2021 Makarov Alexander

#include <gtest/gtest.h>
#include <limits>

#include "include/complex_number.h"

TEST(Makarov_Alexander_ComlexNumberTest, Infty_Mlp) {
    double real = 1.0;
    double img = 1.0;
    ComplexNumber z1(real, img);
    ComplexNumber z2(0.0, std::numeric_limits<double>::infinity());
    ASSERT_EQ(-std::numeric_limits<double>::infinity(), (z1 * z2).getRe());
    ASSERT_EQ(std::numeric_limits<double>::infinity(), (z1 * z2).getIm());
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

TEST(Makarov_Alexander_ComlexNumberTest, Conjugates_Multiplication) {
    double real_1 = 5.0;
    double img_1 = -3.0;
    double real_2 = 5.0;
    double img_2 = 3.0;
    ComplexNumber z1(real_1, img_1), z2(real_2, img_2);
    double expected_re = z1.getRe() * z2.getRe() - z1.getIm() * z2.getIm();
    double expected_im = 0.0;
    ASSERT_DOUBLE_EQ(expected_re, (z1 * z2).getRe());
    ASSERT_DOUBLE_EQ(expected_im, (z1 * z2).getIm());
}
